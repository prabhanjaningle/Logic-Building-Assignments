 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number and toggle first and last nibble of that number.
//Input : 12 
//output : 4026531843
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;

int toggleBit(UINT iNo)
{
    UINT iMask1 = 1,iResult = 0 ,iMask2 = 1 , iMask = 1;
    iMask1 = 0xf0000000;
    iMask2 = 0x0000000f;
    iMask = iMask1 | iMask2;
    iResult = iNo ^ iMask;

    return iResult;

}
int main()
{
    UINT iRet = 0;
    UINT iValue = 0 ;
    printf("Enter the Number : ");
    scanf("%u",&iValue);


    iRet = toggleBit(iValue);
    printf("Modified value is : %u",iRet);
    

    return 0;
}