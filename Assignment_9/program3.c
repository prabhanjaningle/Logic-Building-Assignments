////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : program which accept number from user and count frequency of 2 in it. 
//in it or not.
//Date : 20-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h> 


int CountTwo(int iNo)
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

        //condition two increment frequncy if 2 is in number
        if(iDigit == 2)
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
    iRet = CountTwo(iValue);

    printf("Number of 2's in Number : %d",iRet);

   
}