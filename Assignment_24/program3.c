///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  program which accept string from user and return 
//               difference between frequency of small characters and frequency of 
//               capital characters
//Input : AbacuS
//Output : 4
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Diff(char *str)
{
    int iCnt1 = 0 ,iCnt2 = 0, iDiff = 0;
   
        while(*str != 0)
        {
            if(*str >= 'a' && *str <= 'z')
            {
                iCnt1++;
            }
            else if(*str >= 'a' && *str <= 'z')
            {
                iCnt2++;
            }
            str++;
        } 
        iDiff = iCnt1 - iCnt2;
    return iDiff;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    iRet = Diff(arr);

    printf("%d" , iRet);

    return 0;
}