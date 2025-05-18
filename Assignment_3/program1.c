//////////////////////////////////////////////////////////
// Program1 : Take a number from user and display even
//            numbers 
//
//////////////////////////////////////////////////////////



#include <stdio.h>

void DisplayEven(int iNo)
{

    // Negative Condition Handling
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //For loop with counter 
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
      //intialize counter with 1 and multiply with 2 to get even numbers
      printf(" %d",iCnt * 2);
    }

    

}

int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d" , &iValue);

    DisplayEven(iValue);



    return 0;
}