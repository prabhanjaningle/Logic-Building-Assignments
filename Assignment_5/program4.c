///////////////////////////////////////////////////
// Program to take number and 
// print the odd numbers till that number
////////////////////////////////////////////////

#include <stdio.h>

//Helper Function
void OddDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //For loop Iterate Through numbers
   
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            //Condition to sort odd Numbers
             if((iCnt % 2) != 0)
            {
                printf("%d ", iCnt);
            }
        }
    
}

//Main Function
int main()
{
    int iValue = 0;
    printf("Enter Your Number : ");
    scanf("%d" , &iValue);

    
    OddDisplay(iValue);


    return 0;
}

//Time Complexity : O(N)