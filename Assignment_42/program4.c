///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to take number from user and return factorial of that number
/*
    Input : 5
    Output :120
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Fact(int iValue)
{
    static int iFact = 1;
    if(iValue != 0)
    {
        iFact = iFact * iValue;
        Fact(iValue-1); 
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    iRet = Fact(iValue);
    printf("Factoaial of number are  : %d",iRet);
    return 0;
}