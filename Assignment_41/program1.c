///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to generate below pattern
/*
    Input : 5
    Output : * * * * *
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iValue)
{
    static int iCnt = 1;
    if(iCnt <= iValue)
    {
        printf("* ");
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