 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take a input number and calculate number of ON bits in it
//Input : 7
//output : 3
//Date : 17-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
typedef unsigned UINT;

int CountOne(UINT iNo)
{
    UINT iCnt = 0,iCounter = 0,iMask = 1,iResult = 0;
    while(iCnt < 32)
    {
        iResult = iNo & iMask;
        if(iResult != 0)
        {
            iCounter ++;
        }
        iMask = iMask << 1;
        iCnt ++;
    }
    

return iCounter;
}
int main()
{
    UINT iRet = 0;
    UINT iValue = 0 ;
    printf("Enter the Number : ");
    scanf("%u",&iValue);


    iRet = CountOne(iValue);
    printf("Number of on bits are %u",iRet);
    

    return 0;
}