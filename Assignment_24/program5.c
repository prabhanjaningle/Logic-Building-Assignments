///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   Write a program which accept string from user and display it inn 
//                reverse order. 
//Input : AbacuS
//Output : SucabA
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    end = str;
    start = str;

    while(*end != '\0')
    {
        end++;
    }
    end --;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start ++;
        end--;

    }
       
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    printf("The array is reverse is %s",arr);


    return 0;
}