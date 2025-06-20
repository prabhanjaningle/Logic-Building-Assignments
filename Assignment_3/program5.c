 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Accept a Character from user and check it is vowel or not
//Input : A
//Output : a
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL ChkVwl(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||ch == 'u'||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||ch == 'U')
    {
        return True;
    }
    else 
    {
        return False;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = False;
    printf("Enter the character : ");
    scanf("%c" ,&cValue);
    bRet = ChkVwl(cValue);
    if(bRet == True)
    {
        printf("%c is a vowel",cValue);
    }
    else
    {
        printf("%c is not a vowel",cValue);
    }

    return 0;

    
}