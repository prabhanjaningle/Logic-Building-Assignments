///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   Write a program which accept string from user and accept one 
//                character. Return index of last occurrence of that character
//Input : MarvellouS Infosystems by Piyush Manohar Khairnnar”
//character : M
//Output : 11
//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCounter = 0 ,iFreq = 0;

    for(iCounter = 0; *str != '\0'; iCounter++,str++)
    {
        if(*str == ch)
        {
            iFreq = iCounter;
        }
        
    }
    return iFreq;
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

    
    printf("Index of given character is  : %d",iRet);
      
    



}