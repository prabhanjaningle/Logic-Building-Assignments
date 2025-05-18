//////////////////////////////////////
// Program to Sum All the non factors
//////////////////////////////////////

#include <stdio.h>

//Helper Function
int SummationNonFactors(int iNo)
{
    int iCnt = 0;
    //Variable to store value of summation
    int iSum = 0;

    //condition to handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //two for loops for faster iteration
    for(iCnt = 1; iCnt <= (iNo/2); iCnt ++ )
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }

    }
    for(iCnt > (iNo/2); iCnt < iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    //returning final value
    return iSum;
}

//main function
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number : ");
    scanf("%d" , &iValue);

    //Handling 0 value input
    if(iValue == 0)
    {
        printf("There are no Factors for value : 0");
    }

    else
    {
        iRet = SummationNonFactors(iValue);
        printf("The Summation of Non Factors is : %d" , iRet);


    }

    return 0;
}