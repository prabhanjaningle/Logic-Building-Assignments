///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to take input number from user and return its largest digit.
/*
    Input :988373
    Output :9
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Max(int iValue)
{
    static int Countt = 0,iMax = 0,iDigit = 0;
   
    if(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        Max(iValue/10);
    }

    return iMax;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    iRet = Max(iValue);
    printf("The Max Digit in Number is : %d",iRet);
    return 0;
}