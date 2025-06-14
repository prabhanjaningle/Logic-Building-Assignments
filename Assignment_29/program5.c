///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Application which accept name of file and  and number and read count of 
//               that characters from start
//Input : Demo.txt    12
//Output : Game of thro
//Date : 12-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

int CountSmall(char Fname[],int iSize)
{
    int fd = 0,iRet = 0,iCnt = 0;
    char Arr[BUFFER_SIZE] = {'\0'};

    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else
    {
        iRet = read(fd,Arr,iSize);
        while(Arr[iCnt] != iSize)
        {
            printf("%c",Arr[iCnt]);      
            iCnt++;
        }

    }
    
    
}

int main()
{
   char Fname [50]  = {'\0'};
   int iCh = '\0';

    printf("Enter The File Name : ");
    scanf("%[^'\n']s",&Fname);

    printf("Enter the number of bytes  : ");
   scanf("%d" , &iCh);

    CountSmall(Fname ,iCh);

    return 0;
}