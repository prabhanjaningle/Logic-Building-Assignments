///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to take input number from user and return its reverse digit.
/*
    Input :123
    Output :321
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Reverse(int iValue)
{
    static int Countt = 0,iMin = 10,iDigit = 0,iNumber = 0;
   
    if(iValue != 0)
    {
        iDigit = iValue % 10;
        iNumber = iNumber * 10+iDigit;
        Reverse(iValue/10);
    }

    return iNumber;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    iRet = Reverse(iValue);
    printf("The Min Digit in Number is : %d",iRet);
    return 0;
}