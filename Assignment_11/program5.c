////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input numbers
// 5
//2 4 6 8 10
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",2*iCnt);
    }

}
int main()
{
    int iValue = 0;
    printf("Enter Your Number : ");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}

