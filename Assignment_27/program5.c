///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Write a program which 2 strings from user and concat second string 
//               after first string. (Implement strcat() function).
//Input : “Marvellous Infosystems” 
//         “Logic Building”
//OutPut : Marvellous Infosystems Logic Building
//Date : 12-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCatX(char *src, char *dest) 
{ 
// Fileter 
    while(*src != '\0') 
    { 
        src ++;
       
    }
    *src = ' ';
    src++;
    

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest ++; 
       
    }
    *src = '\0';

    
}  
int main() 
{ 
    char arr[60] = {'\0'}; 
    char brr[30] = {'\0'};  

    printf("Enter the First String : ");
    scanf("%[^\n]s",arr);
    getchar();


    printf("Enter the Second String : ");
    scanf("%[^'\n']s",brr);

    StrCatX(arr,brr); 
    printf("%s",arr);  
    return 0; 
                                                     
} 