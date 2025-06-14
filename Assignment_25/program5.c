///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept string from user and count number of 
//               white spaces 
//Input : MarvellouS Infosystems by Piyush Manohar Khairnnar”
//Output : 5
//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountWhite(char *str)
{
    char *p = NULL;
    char ch = '\0';
    ch = str[0];
    int iCnt = 0;

    p = str;
    while(*p != '\0')
    {
        if(*p == ' ')
        {
           iCnt++;
            
        }

        p++;
    }
    return iCnt;
       
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);

    printf("WhiteSpaces in strings are : %d",iRet);


    return 0;
}