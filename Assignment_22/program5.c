////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Accept division of student from user and depends on the division 
//              display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
//              of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
//Input : A
//Output : 7 am
//input : b
//Output : 8.30 am
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void DisplayValue(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Exam is at 7 AM");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Exam is at 8.30 AM");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Exam is at 9.20 AM");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Exam is at 10.30 AM");
    }
    else
    {
        printf("Invalid Input");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter your Division(A-D): ");
    scanf("%c",&cValue);

    DisplayValue(cValue);

   


    return 0;
}