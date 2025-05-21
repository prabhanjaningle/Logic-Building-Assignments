////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program to find Odd factorial of given number. 
//Date : 19-05-2025
////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

//Helper Function
int OddFactorial(int iNo)
{
    //variable creation
    int iMul = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
   
  
    for(iCnt = 1; iCnt <= iNo; iCnt ++ )
    {
        if((iCnt%2)!=0)
        {
            iMul = iMul * iCnt;
        }
    }
    
    return iMul;
   

   
}

//Main Function
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Your Number : ");
    scanf("%d", &iValue);

   
    
    iRet = OddFactorial(iValue);

    printf("Odd Factorial Of Number is : %d", iRet);
    
    return 0;
}

//Time Complexity : O(N)