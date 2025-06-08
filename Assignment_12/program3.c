////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Accept number of rows and coloumns from user and display below pattern
// Rows :-3 Coloumns : 5
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt1 = 0,iCnt2 = 0;
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol;iCnt2++)
        {
            printf("%d ",iCol - iCnt2 + 1);

        }
        printf("\n");
      
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    printf("Enter Your Number of rows : ");
    scanf("%d",&iValue1);
     printf("Enter Your Number of coloums: ");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);

    return 0;
}

