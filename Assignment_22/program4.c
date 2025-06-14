////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   Accept Character from user and check whether it is in small case or not
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
    if((ch >= 'a' && ch <='z'))
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
        printf("It is in small case");

    }
    else
    {
        printf("It is not in small case");
    }


    return 0;
}