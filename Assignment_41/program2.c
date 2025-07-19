///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to generate below pattern
/*
    Input : 5
    Output :1 2 3 4 5
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iValue)
{
    static int iCnt = 1;
    if(iCnt <= iValue)
    {
        printf("%d ",iCnt);
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