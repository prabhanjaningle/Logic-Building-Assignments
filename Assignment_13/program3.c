 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input rows and coloumns
// A A A A A
// B B B B B
// C C C C C
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0,iCnt2 = 0;

    char ch1 = '\0';  
   
    for(iCnt1 = 1,ch1 = 'A'; iCnt1 <= iRow; iCnt1++,ch1++)
    {
        
       for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
       {
        printf("%c ",ch1);
       }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter rows  : \n");
    scanf("%d", &iValue1);
    printf("Enter coloumns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1,iValue2);

    return 0;



}