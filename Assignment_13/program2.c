 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input rows and coloumns
// A B C D
// a b c d
// A B C D
// a b c d
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0,iCnt2 = 0;

    char ch1 = '\0';  
    char ch2 = '\0'; 
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++,ch1++,ch2++)
    {
        
        if(iCnt1 % 2 == 0)
        {
            for(iCnt2 = 1,ch1 = 'a'; iCnt2 <= iCol; iCnt2++, ch1++)
            {
                printf("%c",ch1);
               
            }
        } 
        else
        {
            for(iCnt2 = 1,ch2 = 'A'; iCnt2 <= iCol; iCnt2++, ch2++)
            {
                printf("%c",ch2);
               
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