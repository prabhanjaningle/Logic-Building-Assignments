 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input rows and coloumns
//Input : rows : 5, Coloumns : 5
/*
    1 2 3 4 5
    1 2     5
    1   3   5
    1     4 5
    1 2 3 4 5
*/
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0,iCnt2 = 0,iSum = 0;
   
    for(iCnt1 = 1;iCnt1 <= iRow; iCnt1++)
    {
        
        for(iCnt2 = 1;iCnt2 <= iCol;iCnt2++)
        {
           
            
           
           if(iCnt1 == 1 || iCnt1 == iRow || iCnt2 == 1 || iCnt2 == iCol || iCnt2 == iCnt1)
           {
                printf("%d\t",iCnt2);
           }
           else
           {
                printf("\t");
           }
          
           
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

//Time complexity : O(N)