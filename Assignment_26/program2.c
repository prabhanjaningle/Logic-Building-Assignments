///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   program which accept string from user and accept one 
//                character. Return frequency of that character.
//Input : MarvellouS Infosystems by Piyush Manohar Khairnnar”
//character : a
//Output : 5
//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCounter = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCounter ++;
        }
        str ++;
    }
    return iCounter;
}

int main()
{
    char Arr[200] = {'\0'};

    char ch = '\0';
    int iRet = 0;

    printf("Enter The string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character : \n");
    scanf(" %c",&ch);

    iRet = CountChar(Arr,ch);

    printf("Frequncy of given character is : %d",iRet);
      
    



}