///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept string from user and accept one 
//               character. Check whether that character is present in string or not.
//Input : MarvellouS Infosystems by Piyush Manohar Khairnnar”
//character : a
//Output : True
//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
# define True 1
# define False 0 
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL bChecker = False;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bChecker = True;
        }
        str ++;
    }
    return bChecker;
}

int main()
{
    char Arr[200] = {'\0'};

    char ch = '\0';
    BOOL bRet = False;

    printf("Enter The string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character : \n");
    scanf(" %c",&ch);

    bRet = ChkChar(Arr,ch);

    if(bRet == True)
    {
        printf("character %c is present in string",ch);
    }
    else
    {
        printf("character %c is not present in string",ch);  
    }



}