 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input 2 numbers and print the position of common bits in it.
//Input : 7 15
//output : 1 2 3
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;

void CommonBits(UINT iNo1,UINT iNo2 )
{
    UINT iCnt = 1,iCounter = 0,iMask = 1,iResult2 = 0,iResult1 = 0;
    while(iCnt <= 32)
    {
        iResult1 = iNo1 & iMask;
        iResult2 = iNo2 & iMask;
        if((iResult1 && iResult2) != 0)
        {
            printf("%d\n",iCnt);
        }
        iMask = iMask << 1;
        iCnt ++;
    }
    
}
int main()
{
    UINT iValue1 = 0 ,iValue2 = 0;
    printf("Enter the first Number : ");
    scanf("%u",&iValue1);

    printf("Enter the second Number : ");
    scanf("%u",&iValue2);

    CommonBits(iValue1,iValue2);    

    return 0;
}