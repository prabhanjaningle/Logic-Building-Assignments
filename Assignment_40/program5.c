///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to generate below pattern
/*
    a b c d e f
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display()
{
    static char cCnt = 'a';
    if(cCnt <= 'f')
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