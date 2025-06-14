///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which accept string from user and count number of 
//              small characters.
//Input : AbacuS
//Output : 4
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountCap(char *str)
{
    int iCnt = 0;
   
        while(*str != 0)
        {
            if(*str >= 'a' && *str <= 'z')
            {
                iCnt++;
            }
            str++;
        } 
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    iRet = CountCap(arr);

    printf("%d" , iRet);

    return 0;
}