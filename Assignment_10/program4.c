////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : program which accept number from user and return multiplication of all 
//digits.
//Date : 21-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int CountMul(int iNo)
{
    int iCnt = 0 , iDigit = 0 ,iMul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iMul = iMul;
        }
        else
        {
            iMul = iMul * iDigit;
        }
        iNo = iNo / 10;
        iCnt ++;

    }
 return iMul;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : " );
    scanf("%d" , &iValue);

    iRet = CountMul(iValue);
    printf("Count of odd digits in Number is : %d" , iRet);

    return 0;
}