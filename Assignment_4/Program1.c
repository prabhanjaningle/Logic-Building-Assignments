////////////////////////////////////
//Program to find multiplication
//of factors of given number
////////////////////////////////////

#include<stdio.h>

//Helper Function
int DisplayMulFactors(int iNo)
{
   //Counter intialization
    int iCnt = 0;
     //variable created to store the value of multiplication result
    int mul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   //Business Logic
    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            mul = mul * iCnt;
        }
    }
    return mul;
}

//Main Function
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The Number : ");
    scanf("%d",&iValue);

    iRet = DisplayMulFactors(iValue);

    if(iValue == 0)
    {
        printf("Multiplication of factors is : 0" );

    }

    else
    {
        printf("Multiplication Of factors of given number is : %d" , iRet);
    }

    return 0;
    


}