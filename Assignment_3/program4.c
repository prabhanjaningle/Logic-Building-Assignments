 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Accept a Character from user and convert the case of that character 
//Input : A
//Output : a
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

void DisplayConvert(char ch)
{
    if(ch >= 'A' &&  ch <='Z')
    {
        printf("%c", ch+32);
    }
    else if(ch >='a' && ch <= 'z')
    {
        printf("%c",ch-32);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter the character : ");
    scanf("%c" ,&cValue);
    DisplayConvert(cValue);

    return 0;

    
}