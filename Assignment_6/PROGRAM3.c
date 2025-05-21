////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program to find factorial of given number. 
//Date : 18-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
int Factorial(int iNo)
{
    int iCnt = 0;

    //Variable to store value of factorial
    int iMul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    //For Loop to display factorial
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMul = iMul * iCnt;
    }

    return iMul;
}

//Main Function
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    if(iValue == 0)
    {
        printf("Factorial is : %d",  1);
    }
    else
    {
        iRet = Factorial(iValue);
        printf("Factorial is : %d", iRet);
    }

    return 0;
}

//Time Complexity : O(N)