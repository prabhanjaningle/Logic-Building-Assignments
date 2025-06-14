///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Write a program which accept string from user and check whether 
//               it contains vowels in it or not.  
//Input : AbacuS
//Output : 4-2 = 2
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL CheckVwl(char *str)
{
    BOOL bChecker = False;
   
        while(*str != 0)
        {
            if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
            {
                bChecker = True;
            }
            
            str++;
        } 
 
    return bChecker;
}

int main()
{
    char arr[20];
    BOOL bRet = False;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    bRet = CheckVwl(arr);

   if(bRet == True)
   {
        printf("The string contain vowels");
   }
   else
   {
         printf("The string does not contain vowels");
   }

    return 0;
}