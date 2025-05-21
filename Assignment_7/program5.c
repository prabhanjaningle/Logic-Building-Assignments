////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program to find Difffernece Between Even and Odd factorial of given number. 
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
int FactorialDiff(int iNo)
{
    //variable creation
    int iMul1 = 1;
    int iMul2 = 1;
    int iCnt = 0;
    int Diff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //For loop for odd factorial
    for(iCnt = 1; iCnt <= iNo; iCnt ++ )
    {
        if((iCnt%2)!=0)
        {
            iMul1 = iMul1 * iCnt;
        }
    }

    //For loop for even Factorial Of Number With ) and 1 Codition Handling
    if(iNo == 0 || iNo == 1)
    {
        iMul2 = 0;
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt ++ )
        {
            if((iCnt%2)==0)
            {
                iMul2 = iMul2 * iCnt;
            }
        }
    }
   
  
   //Difference between even and odd
    Diff = iMul2-iMul1;
    
    return Diff;
   

   
}

//Main Function
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Your Number : ");
    scanf("%d", &iValue);

   
    
    iRet = FactorialDiff(iValue);

    printf("Differnece Between even and odd Factorial Of Number is : %d", iRet);
    
    return 0;
}

//Time Complexity : O(N)