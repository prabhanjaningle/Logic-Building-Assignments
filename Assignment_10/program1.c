////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept number from user and return the count of even 
//digits.
//Date : 21-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0 , iDigit = 0 ,iEven= 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEven ++;
        }
        
        iNo = iNo / 10;
        iCnt ++;

    }
 return iEven;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : " );
    scanf("%d" , &iValue);

    iRet = CountEven(iValue);
    printf("Count of even digits in Number is : %d" , iRet);

    return 0;
}