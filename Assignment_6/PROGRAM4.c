////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which accept number from user and display its table.  
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
void Table(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    //For loop for counter to iterate throungh 1 to 10
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ",iNo *iCnt);   
    }

   
}

//Main Function
int main()
{
    int iValue = 0;
    
    printf("Enter Your Number : ");
    scanf("%d", &iValue);
    Table(iValue);

    return 0;
}

//Time Complexity : O(N)