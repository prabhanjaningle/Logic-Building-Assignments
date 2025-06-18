 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number and check the 9th or 12th position bit on or off
//Input : 2304
//output : TRUE
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;
#define True 1
#define False 0
typedef int BOOL;

BOOL ChkBit(UINT iNo)
{
    UINT iResult = 0,iMask = 1;
    BOOL bCheck = 0;
    iMask = 0x00000900;

    iResult = iNo & iMask;
    if(iResult != 0)
    {
        bCheck= 1;
    }

    return bCheck;
    
}
int main()
{
    UINT iValue = 0;
    BOOL bRet = 0;
    printf("Enter the Number : ");
    scanf("%u",&iValue);


    bRet = ChkBit(iValue);    
    if(bRet == 1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}