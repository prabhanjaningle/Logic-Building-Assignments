///////////////////////////////////////
//Print the pattern taking input from user
//Input : 5
//output : $ * $ * $ * $ * $ *
///////////////////////////////////////


#include <stdio.h>

//Helper Function
void Pattern(int iNo)
{
    int iCnt  = 0;

    //Negative input handling
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //Loop to iterate and print pattern
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

//Main Function
int main()
{
    int iValue = 0;
    printf("Enter The number : ");
    scanf("%d", &iValue);

    //Input 0 Handling
    if(iValue == 0)
    {
        printf("Dont you want dollar on screen");
    }

    else
    {
        Pattern(iValue);
    }

    return 0;
}

//Time Complexity : O(N)