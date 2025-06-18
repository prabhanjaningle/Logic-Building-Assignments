 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number and position from user and toggle that bit
//Input : 6 Position : 1
//output : 7
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;

int toggleBit(UINT iNo, UINT iPos)
{
    int iMask = 1,iResult = 0;
    iMask = iMask << iPos-1;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        iResult = iNo | iMask;
    }
    else
    {
        iResult = iNo ^ iMask;
    }
    return iResult;

}


int main()
{
    UINT iRet = 0;
    UINT iValue = 0 ,iLength = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    printf("Enter the position : ");
    scanf("%d",&iLength);

    iRet = toggleBit(iValue,iLength);
    printf("Modified value is : %d",iRet);
    

    return 0;
}