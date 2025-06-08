 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input rows and coloumns
//1 2 3 4 5
//6 7 8 9 10
//11 12 13 14 15
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0,iCnt2 = 0,iCnt3 = 1;
 
   
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        
       for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++ )
       {
            printf("%d\t",iCnt3);
            iCnt3++;
           

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