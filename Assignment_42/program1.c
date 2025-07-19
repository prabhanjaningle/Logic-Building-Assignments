///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to generate below pattern
/*
    Input : 5
    Output :5 * 4 * 3 * 2 * 1 *
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iValue)
{
    if(iValue >= 1)
    {
        printf("%d * ",iValue);
        Display(iValue-1);
        
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