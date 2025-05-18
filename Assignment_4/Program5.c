/////////////////////////////////////////////////////
//Program to give difference between summation of
//factors and non-factors of given number
//////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
int FactDiff(int iNo)
{
   
    int iCnt = 0;
     //variables to store values of summation of factors and non factors
    int iSumFact = 0;
    int iSumNonFact = 0;
    //variable to store value of differece
    int iDiff = 0;

    //Negative input handling
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //for loop to get summation of factors
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
    }

     //two for loop to get summation of non-factors
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    for(iCnt <= (iNo/2); iCnt < iNo;  iCnt++)
    {
        iSumNonFact = iSumNonFact + iCnt;
    }

    //business logic
    iDiff =  iSumFact- iSumNonFact ;

    return iDiff;
}
//Main Function
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number : ");
    scanf("%d", &iValue);

    //Input 0 case handling
    if(iValue == 0)
    {
        printf("There Are no factors for value  : 0");

    }
    else
    {
        iRet = FactDiff(iValue);
        
        printf("Differnce between Summation of Factors and Non-Factors is : %d ", iRet);
    }

    return 0;
}