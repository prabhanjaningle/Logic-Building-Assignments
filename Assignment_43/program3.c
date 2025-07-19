///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to take input string from user and return the small characters count.
/*
    Input : HELl o Wor ld
    Output :6
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Count(char *str)
{
    static int Countt = 0;
   
    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            Countt ++;
        }
        str++;
        Count(str);
    }

    return Countt;
}

int main()
{
    int iValue = 0,iRet = 0;
    char ch[20];
    printf("Enter the String : ");
    scanf("%[^\n]",&ch);
    iRet = Count(ch);
    printf("The Small characters in string are : %d",iRet);
    return 0;
}