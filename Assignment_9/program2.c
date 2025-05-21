////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept number from user and check whether it contains 0 
//in it or not.
//Date : 20-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    //Variable to store the value of true or false
    BOOL bChecker = FALSE;
    int iDigit = 0;
    while(iNo != 0)
    {
        //Getting digits of number
        iDigit = iNo % 10;
        //Condition if 0 appears
        if(iDigit == 0)
        {
            bChecker = TRUE;
        } 
        iNo = iNo / 10;
    }
    
    return bChecker;
}

//main function
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    printf("Value of Output: %d\n",bRet);
    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It does not contain zero");
    }
}