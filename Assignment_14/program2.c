 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input rows and coloumns
//Input : rows : 4 , Coloumns : 4
//2 4 6 8
//1 3 5 7
//2 4 6 8
//1 3 5 7
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0,iCnt2 = 0;
 
   
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        

       if((iCnt1 %2)!=0)
       { 
        for(iCnt2 = 1; iCnt2 <= 2*iCol; iCnt2++ )
        {
            if((iCnt2 % 2 )== 0)
            {
                printf("%d\t",iCnt2);
                iCnt2++;
            }
        }  
       }

       else
       {
        for(iCnt2 = 1; iCnt2 <= 2*iCol; iCnt2++ )
        {
            if((iCnt2 % 2 )!= 0)
            {
                printf("%d\t",iCnt2);
                iCnt2++;
            }
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