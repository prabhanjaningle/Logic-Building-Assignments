///////////////////////////////////////////////////
// Program to take number and 
// print the First 5 multiples of it
////////////////////////////////////////////////

#include <stdio.h>

//Helper Function
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //For loop Iterate Through numbers
   
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
             
        printf("%d ", iCnt*iNo);
            
    }
    
}

//Main Function
int main()
{
    int iValue = 0;
    printf("Enter Your Number : ");
    scanf("%d" , &iValue);

    
    MultipleDisplay(iValue);


    return 0;
}

//Time Complexity : O(5)