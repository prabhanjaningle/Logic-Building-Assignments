 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number and range from user and toggle bits in that range
//Input : 8 Start : 1 End : 3 
//output : 15
//Date : 18-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;

UINT ChkBit(UINT iNo,UINT First,UINT Last)
{
    UINT iResult = 0,iMask1 = 1,iMask2 = 1,iMask = 1;
    int iCnt = 0;
    for(iCnt = First - 1;iCnt <= Last-1;iCnt++)
    {
        iMask |= 1 << iCnt;
    }
    iResult = iNo ^ iMask;

   return iResult;
    
}
int main()
{
    UINT iValue = 0,iStart = 0, iEnd = 0;
    UINT iRet = 0;
    printf("Enter the Number : ");
    scanf("%u",&iValue);

    printf("Enter the first Number : ");
    scanf("%u",&iStart);

    printf("Enter the second Number : ");
    scanf("%u",&iEnd);


    iRet = ChkBit(iValue,iStart,iEnd);    
    printf("Modified value is : %d",iRet);

    return 0;
}