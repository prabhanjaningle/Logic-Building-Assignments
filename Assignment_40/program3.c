///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to generate below pattern
/*
    5 4 3 2 1
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display()
{
    static int iCnt = 5;
    if(iCnt >= 1)
    {
        printf("%d ",iCnt);
        iCnt--;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}