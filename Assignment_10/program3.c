////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept number from user and return the count of digits in 
//between 3 and 7.
//Date : 21-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0 , iDigit = 0 ,iRange= 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iRange ++;
        }
        
        iNo = iNo / 10;
        iCnt ++;

    }
 return iRange;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : " );
    scanf("%d" , &iValue);

    iRet = CountRange(iValue);
    printf("Count of odd digits in Number is : %d" , iRet);

    return 0;
}