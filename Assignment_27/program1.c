///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   program which accept string from user and copy the 
//                contents of that string into another string.(StrCpy)

//Date : 11-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpyX(char *src, char *dest) 
{ 
// Fileter 
    while(*src != '\0') 
    { 
       *dest = *src; 
        src++; 
        dest++; 
    } 
    dest --;
   
}  
int main() 
{ 
    char arr[30] = "Marvellous Multi OS"; 
    char brr[30] = {'\0'};  
    // Empty string 
    StrCpyX(arr,brr); 
    printf("%s",brr);  
    return 0; 
                                                     
} 