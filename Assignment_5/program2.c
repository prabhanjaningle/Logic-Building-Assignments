///////////////////////////////////////////////////
// Program to take number and 
// print the numbers till that number arrives
////////////////////////////////////////////////

#include <stdio.h>

//Helper Function
void Display(int iNo)
{
    int iCnt = 0;

    //Negative Input Handling
    if(iNo < 0)
    {
        for(iCnt = -1; iCnt >= iNo; iCnt--)
        {
            printf("%d ", iCnt);
        }
    }

    else
    {
        for(iCnt = 0; iCnt <= iNo; iCnt++)
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

    
    Display(iValue);


    return 0;
}

//Time Complexity : O(N)