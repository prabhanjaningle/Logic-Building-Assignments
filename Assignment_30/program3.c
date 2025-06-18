 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number from user and check whether 7th,15th,21st and 28th bit in on or off
//Input : 135,282,752   Input : 32
//output : all bits are on
//output : all bits are not on
//Date : 16-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef int BOOL;
typedef unsigned UINT;
#define True 1
#define False 0

BOOL ChkBit(UINT iNo)
{
    UINT iResult = 0,iMask = 1;

    iMask = (0x00000040 | 0x00004000 | 0x00100000 | 0x08000000);
    iResult = (iNo & iMask);
   
    return(iResult == iMask);

}

int main()
{
    BOOL bRet = 0;
    UINT iValue = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);
    if(bRet == 1)
    {
        printf("all bits are on");
    }
    else
    {
        printf("all bits are not on");
    }

    return 0;
}