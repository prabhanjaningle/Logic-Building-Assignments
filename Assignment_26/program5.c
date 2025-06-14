///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   program which accept string from user reverse that string 
//                in place.
//Input : abcd
//Output : dcba
//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;
    while(*end != '\0')
    {
        end++;
    }

    end--;
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
    char Arr[200] = {'\0'};

    char ch = '\0';

    printf("Enter The string : \n");
    scanf("%[^'\n']s", Arr);

    StrRevX(Arr);
    printf("Modified string is : %s",Arr);


}