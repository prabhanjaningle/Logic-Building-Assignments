///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  a program which accept string from user and copy capital 
//               characters of that string into another string.
//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrnCpyX(char *src, char *dest) 
{ 
// Fileter 
    while(*src != '\0') 
    { 
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src; 
            dest++; 
        }
        src ++; 
    }
    dest --;
}  
int main() 
{ 
    char arr[30] = "Marvellous Multi OS"; 
    char brr[30] = {'\0'};  
    // Empty string 
    StrnCpyX(arr,brr); 
    printf("%s",brr);  
    return 0; 
                                                     
} 