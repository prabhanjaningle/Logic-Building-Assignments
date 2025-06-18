 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number and position from user and off that bit
//Input : 7 2
//output : 5
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;

int OffBit(UINT iNo, UINT iPos)
{
    int iMask = 1,iResult = 0;
    iMask = iMask << iPos-1;

    iResult = iNo ^ iMask;
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

    iRet = OffBit(iValue,iLength);
    printf("Modified value is : %d",iRet);
    

    return 0;
}