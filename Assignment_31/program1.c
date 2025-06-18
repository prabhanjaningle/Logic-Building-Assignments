 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number from user and off 7th bit if it is on return modified value.
//Input : 65 
//output : 1
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;


int OffBit(UINT iNo)
{
    UINT iMask1 = 1,iResult = 0 ;
    iMask1 = iMask1 << 6;
    iMask1 = ~iMask1;

    iResult = iNo & iMask1;

    return iResult;
}

int main()
{
    UINT iValue = 0,iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    printf("Modified value is : %d",iRet);
    
   
    return 0;
}