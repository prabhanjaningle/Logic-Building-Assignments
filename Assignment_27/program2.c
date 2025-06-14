///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   program which accept string from user and copy the 
//                contents of that string into another string. (Implement strncpy() 
//                function) 

//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrnCpyX(char *src, char *dest,int iNo) 
{ 
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(*src == '\0')
        {
            break;
        }
        else
        {
            *dest = *src;
            src++;
            dest ++;

        }

    }
    dest --;
   
}  
int main() 
{ 
    char arr[30] = "Marvellous Multi OS"; 
    char brr[30] = {'\0'};  
    int iCharacters = 0;
    printf("Enter Number of characters you want to copy: ");
    scanf("%d",&iCharacters);
    // Empty string 
    StrnCpyX(arr,brr,iCharacters); 
    printf("%s",brr);  
    return 0; 
                                                     
} 