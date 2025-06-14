////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   Accept Character from user and check whether it is capital alphabet or not 
//                 (A-Z a-z).   
//Input : F
//Output : true
//input : f
//Output : false
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL checkAlpha(char ch)
{
    BOOL checker = False;
    if((ch >= 'A' && ch <='Z'))
    {
        checker = True;
    }
    else
    {
        checker = False;
    }
    return checker;

}

int main()
{
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter your character : ");
    scanf("%c",&cValue);

    bRet = checkAlpha(cValue);

    if(bRet == True)
    {
        printf("It is Capital charcter");

    }
    else
    {
        printf("It is not Capital character");
    }


    return 0;
}