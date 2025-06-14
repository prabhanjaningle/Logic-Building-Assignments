///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept string from user and toggle the case.  
//Input : AbacuS
//Output : aBACUs
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
        if(*p >= 'a' && *p <= 'z')
        {
            *p = *p - 32;
            
        }

        else if(*p >= 'A' && *p <= 'Z')
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

    strtogglex(arr);

    printf("The array in UpperCase : %s",arr);


    return 0;
}