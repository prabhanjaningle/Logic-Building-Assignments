///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Recursive program to take input string from user and return the white spaces count
/*
    Input : HELl o Wor ld
    Output :3
*/
//Date : 19-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int Count(char *str)
{
    static int Countt = 0;
   
    if(*str != '\0')
    {
        if(*str == ' ')
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
    printf("The white spaces in string are : %d",iRet);
    return 0;
}