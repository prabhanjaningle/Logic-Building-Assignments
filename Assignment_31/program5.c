 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : program which accept number from user and on its first 4 bits
//Input : 73
//output : 79
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;
int toggleBit(UINT iNo)
{
    UINT iMask1 = 1,iResult = 0;
    iMask1 = 0x0000000f;
    iResult = iNo | iMask1; 
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