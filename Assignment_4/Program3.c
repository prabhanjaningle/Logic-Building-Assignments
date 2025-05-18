//////////////////////////////////////////
// Program to Display Non factors....
/////////////////////////////////////////

#include <stdio.h>

//Helper Function
void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    //Negative Condition Handling
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    //Two Loops for faster iteration
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }

    for(iCnt > (iNo/2); iCnt < iNo; iCnt++)
    {
        printf("%d ",iCnt);
    }

}

//Main Function
int main()
{
    int iValue = 0;
    printf("Enter The Number : ");
    scanf("%d" , &iValue);

    if(iValue == 0)
    {
        printf("There are no factors for value : 0");
    }
    else
    { 
        DisplayNonFactors(iValue);
    }
    return 0;
}