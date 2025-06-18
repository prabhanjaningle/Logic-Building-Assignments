 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number from user and check whether 5th  and 18th bit in on or off
//Input : 131088
//output : 5th and 18th bit is on
//Date : 16-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef int BOOL;
typedef unsigned UINT;
#define True 1
#define False 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 1,iResult = 0;
    iMask = 0x00000010 | 0x00020000;
    iResult = iNo & iMask;

    return(iResult == iNo);

    

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
        printf("5th and 18th bit is on");
    }
    else
    {
        printf("Two bits are not on");
    }

    return 0;
}