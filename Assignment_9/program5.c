////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept number from user and count frequency of such a 
//digits which are less than 6. 
//Date : 20-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 


int Count(int iNo)
{
    
    int iDigit = 0;
    int iFq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        //Getting digits of number
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
           iFq++;
        } 
        iNo = iNo / 10;
    }
    return iFq;
    
}

//main function
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);
    iRet = Count(iValue);

    printf("Number of Digits less than 6 in Number : %d",iRet);

   
}