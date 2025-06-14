 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   Accept Character from user and check whether it is alphabet or not 
//                 (A-Z a-z).   
//Input : Number of elements : 5
//Elements : 5 8 14 444 5
//Output : 5 8 5 12 5
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL checkAlpha(char ch)
{
    BOOL checker = False;
    if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <= 'z'))
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
        printf("It is charcter");

    }
    else
    {
        printf("It is not character");
    }


    return 0;
}