///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to take number from user and return Product of digits
/*
    Input : 879
    Output :24
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Product(int iValue)
{
    static int iProduct = 1,iDigit = 0;
    if(iValue != 0)
    {
        iDigit = iValue % 10;
        iProduct = iProduct * iDigit;
        Product(iValue/10); 
    }
    return iProduct;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    iRet = Product(iValue);
    printf("Product of digit of number are  : %d",iRet);
    return 0;
}