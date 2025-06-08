////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Print the Pattern from given input rows and coloumns
// A B C D
// A B C D
// A B C D
// A B C D
//Date : 03-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0,iCnt2 = 0;
    char ch = '\0';   
    for(iCnt1 = 0; iCnt1 < iRow; iCnt1++)
    {
        for(iCnt2 = 0,ch = 'A'; iCnt2 < iCol; iCnt2++,ch++)
        {
            printf("%c",ch);
            
        }
       
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter rows and coloumns : ");
    scanf("%d %d", &iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;



}