///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to take number from user and return summation of digits
/*
    Input : 879
    Output :24
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Sum(int iValue)
{
    static int iSum = 0,iDigit = 0;
    if(iValue != 0)
    {
        iDigit = iValue % 10;
        iSum = iSum + iDigit;
        Sum(iValue/10); 
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    iRet = Sum(iValue);
    printf("Summation of digit of number are  : %d",iRet);
    return 0;
}