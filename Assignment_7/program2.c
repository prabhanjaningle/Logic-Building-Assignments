////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Program that Accept amount in US dollar and return its corresponding value in Indian currency. 
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
int DollarToInr(int iNo)
{
    //variable creation
    int iInr = 0;
    
    //Actual business logic
    iInr = 70*iNo;

    return iInr;


   
}

//Main Function
int main()
{
    int iValue = 0;
    int Ret = 0;
    
    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    Ret = DollarToInr(iValue);

    printf(" $%d : Rs.%d",iValue, Ret);

    return 0;
}

//Time Complexity : O(1)