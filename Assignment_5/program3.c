///////////////////////////////////////////////////
// Program to take number and 
// print the number Line of Number
////////////////////////////////////////////////

#include <stdio.h>

//Helper Function
void Display(int iNo)
{
    int iCnt = 0;

    //For loop Iterate From negative to positive number
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
}

//Main Function
int main()
{
    int iValue = 0;
    printf("Enter Your Number : ");
    scanf("%d" , &iValue);

    
    Display(iValue);


    return 0;
}

//Time Complexity : O(2N)