///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   program which accept string from user and convert it into 
//                lower case. 
//Input : AbacuS
//Output : abacus
//Date : 10-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void strlwrx(char *str)
{
    char *p = NULL;
    char ch = '\0';
    ch = str[0];

    p = str;
    while(*p != '\0')
    {
        if(*p >= 'A' && *p <= 'Z')
        {
            *p = *p + 32;
            
        }
        p++;

    }

    while(*p != '\0')
    {
        printf("%c",*p);
    }
    
       
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    strlwrx(arr);

    printf("The array in lowercase %s",arr);


    return 0;
}