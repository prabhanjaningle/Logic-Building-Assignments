///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to take input number from user and return its smallest digit.
/*
    Input :988373
    Output :3
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Max(int iValue)
{
    static int Countt = 0,iMin = 10,iDigit = 0;
   
    if(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        Max(iValue/10);
    }

    return iMin;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    iRet = Max(iValue);
    printf("The Min Digit in Number is : %d",iRet);
    return 0;
}