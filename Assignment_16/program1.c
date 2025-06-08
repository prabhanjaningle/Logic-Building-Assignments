 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input rows and coloumns
//Input : rows : 4 , Coloumns : 4
// *
// * * 
// * * *
// * * * *
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0,iCnt2 = 0;
   
    for(iCnt1 = 1;iCnt1 <= iRow; iCnt1++)
    {
        
        for(iCnt2 = 1;iCnt2 <= iCnt1;iCnt2++)
        {
            
                printf("*");
           
          
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