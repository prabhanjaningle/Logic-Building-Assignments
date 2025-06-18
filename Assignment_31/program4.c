 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number from user and toggle 7th and 10th bit return modified value.
//Input : 137
//output : 713
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;


int toggleBit(UINT iNo)
{
    UINT iMask1 = 1,iResult = 0,iMask2 = 1,iMask = 0;
    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 9;

    iMask = iMask1 | iMask2;
    iResult = iNo & iMask;
    if(iResult == 0)
    {
        iResult = iNo | iMask1;
        iResult = iResult | iMask2;
    }
    else if(iResult == iMask)
    {
        iResult = iNo ^ iMask1;
        iResult = iResult ^ iMask2;

    }
    else if(iResult == iMask1)
    {
        iResult = iNo ^ iMask1;
        iResult = iResult | iMask2;
    }
    else
    {
        iResult = iNo | iMask1;
        iResult = iResult ^ iMask2;
    }

    return iResult;
}

int main()
{
    UINT iValue = 0,iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = toggleBit(iValue);
    printf("Modified value is : %d",iRet);
    
   
    return 0;
}