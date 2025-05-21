////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which accept number from user and if number is less than 50 
//then print small , if it is greater than 50 and less than 100 then print medium, if it is 
//greater than 100 then print large.
//Date : 18-05-2025
////////////////////////////////////////////////////////////////////////////////////////////

//Helper Function
#include <stdio.h>
void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("medium");
    }
    else if(iNo > 100)
    {
        printf("large");
    }
    else if(iNo == 50 || iNo == 100)
    {
        printf("Not mentioned whether inclusive or not");
        
    }
    else
    {
        printf("Wrong Input");
    }
}

//Main Function
int main()
{
    int iValue = 0;
    printf("Enter the Number: ");
    scanf("%d",&iValue);
    Number(iValue);


    return 0;
}

//Time Complexity : O(1)