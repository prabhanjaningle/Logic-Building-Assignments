 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number from user and toggle 7th bit return modified value.
//Input : 137
//output : 201
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;


int toggleBit(UINT iNo)
{
    UINT iMask1 = 1,iResult = 0 ;
    iMask1 = iMask1 << 6;
    
    iResult = iNo & iMask1;
    if(iResult == 0)
    {
        iResult = iNo | iMask1;
    }
    else
    {
        iResult = iNo ^ iMask1;
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