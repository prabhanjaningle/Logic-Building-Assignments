////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : program which accept number from user and display below pattern.
//order.
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    //For loop for counter to iterate till Input number
    for(iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        printf("*\t");
       
    }
    for(iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        printf("#\t");
       
    }
   
}

//Main Function
int main()
{
    int iValue = 0;
    
    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}

//Time Complexity : O(2N)