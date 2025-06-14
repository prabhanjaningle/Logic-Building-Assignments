///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : program which accept string from user and display only 
//              digits from that string.   
//Input : Abac45uS32
//Output :4532
//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void strtogglex(char *str)
{
    char *p = NULL;
    char ch = '\0';
    ch = str[0];

    p = str;
    while(*p != '\0')
    {
        if(*p >= '0' && *p <= '9')
        {
            printf("%c",*p);
            
        }

        p++;
    }
       
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    strtogglex(arr);


    return 0;
}