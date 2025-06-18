 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number and position from user and check whether bit in on or off
//              if it is on return true else false.
//Input : 8 pos : 3
//output : FALSE
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef int BOOL;
typedef unsigned UINT;
#define True 1
#define False 0

BOOL ChkBit(UINT iNo, UINT iPos)
{
    int iMask = 1,iResult = 0;
    iMask = iMask << iPos-1;

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
    UINT iValue = 0 ,iLength = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    printf("Enter the position : ");
    scanf("%d",&iLength);

    bRet = ChkBit(iValue,iLength);
    if(bRet == 1)
    {
        printf("%d bit is on",iLength);
    }
    else
    {
        printf("%d bit is off",iLength);
    }

    return 0;
}