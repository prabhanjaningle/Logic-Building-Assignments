#include <stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    BOOL checker = False;
    if(ch == '!'|| ch == '@'|| ch == '#'|| ch == '$'|| ch == '%'|| ch == '^'|| ch == '&'|| ch == '*')
    {
        checker = True;
    }

    return checker;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = False;
    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == True)
    {
        printf("Given character is special");
    }
    else
    {
        printf("Given character is not special");
    }

    

    return 0;
}