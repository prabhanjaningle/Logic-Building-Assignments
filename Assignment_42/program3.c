///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to count number of characters
/*
    Input : Hello
    Output :5
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Count(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        str++;
        iCount++;
        Count(str);
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    char ch[20];
    int iRet = 0;
    printf("Enter the string : ");
    scanf("%s",&ch);
    iRet = Count(ch);
    printf("Count of number in string are : %d",iRet);
    return 0;
}