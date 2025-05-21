////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   program which accept number from user and return difference between 
//summation of even digits and summation of odd digits. 
//Date : 21-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int CountDiff(int iNo)
{
    int iCnt = 0 , iDigit = 0 ,iOdd= 0,iEven = 0,iDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iOdd ++;
        }
        else if((iDigit % 2) == 0)
        {
            iEven ++;
        }
        
        iNo = iNo / 10;
        iCnt ++;

    }
    iDiff = iEven - iOdd;
 return iDiff;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : " );
    scanf("%d" , &iValue);

    iRet = CountDiff(iValue);
    printf("Count of odd digits in Number is : %d" , iRet);

    return 0;
}