///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Application which accept name of file and character and return count of 
//               that characters from it
//Input : Demo.txt    
//Output : 5
//Date : 12-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

int CountSmall(char Fname[],char ch)
{
    int fd = 0,iRet = 0,iCounter = 0,iCnt = 0;
    char Arr[BUFFER_SIZE] = {'\0'};
    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to allocate memory");
    }
    else
    {
        iRet = read(fd,Arr,BUFFER_SIZE);
        while(Arr[iCnt] != '\0')
        {
            if(Arr[iCnt] == ch)
            {
                iCounter ++;
            }
            iCnt++;
        }

    }
    return iCounter;
    
    
}

int main()
{
   int iRet = 0;
   char Fname [50]  = {'\0'};
   char ch = '\0';

    printf("Enter The File Name : ");
    scanf("%[^'\n']s",&Fname);

    printf("Enter the character : ");
   scanf(" %c" , &ch);

    iRet = CountSmall(Fname ,ch);
    printf("Number of %c in string are : %d\n",ch,iRet);

    return 0;
}