///////////////////////////////////////////
//Program to Display Factors of given
// number
/////////////////////////////////////////

#include <stdio.h>

//Helper Function
void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        //Nested if statement for multiple condition
        if((iNo % iCnt) == 0)
        {
            
            printf(" %d",iCnt);
            
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Your Number : ");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}