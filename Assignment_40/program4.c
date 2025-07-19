///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to generate below pattern
/*
    A B C D E F
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display()
{
    static char cCnt = 'A';
    if(cCnt <= 'F')
    {
        printf("%c ",cCnt);
        cCnt++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}