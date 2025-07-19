///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to generate below pattern
/*
    Input : 6
    Output :A B C D E F
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iValue)
{
    static int iCnt = 1;
    static char ch = 'A';
    if(iCnt <= iValue)
    {
        printf("%c ",ch);
        ch++;
        iCnt++;
        Display(iValue);
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}