 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number from user and check whether 15th bit in on or off
//Input : 17792
//output : 15th bit is on
//Date : 16-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef int BOOL;
typedef unsigned UINT;
#define True 1
#define False 0

BOOL ChkBit(int iNo)
{
    int iMask = 1,iResult = 0;
    iMask = 0x00004000;

    iResult = iNo & iMask;

    
    if(iResult == 0)
    {
        return False;
    }
    else
    {
        return True;
    }

}


int main()
{
    BOOL bRet = 0;
    int iValue = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);
    if(bRet == 1)
    {
        printf("15th bit is on");
    }
    else
    {
        printf("15th bit is off");
    }

    return 0;
}