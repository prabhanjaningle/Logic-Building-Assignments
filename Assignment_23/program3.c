#include <stdio.h>


void Display(char ch)
{
    char ch1 = '\0';
    if(ch >= 'A' && ch <= 'Z')
    {
        for(ch = ch; ch <= 'Z';ch++)
        {
            printf("%c ",ch);
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        for(ch1 = 'a'; ch1 <= ch; ch--)
        {
            printf("%c ",ch);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}