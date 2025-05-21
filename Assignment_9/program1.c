////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept number from user and display its digits in reverse order.
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 

void DisplayDigit(int iNo) 
{ 
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;

    }                                              
}

int main() 
{ 
    int iValue = 0; 
    printf("Enter the Value : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);
    
} 
//Time Complexity : O(N)