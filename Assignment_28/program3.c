///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Application which accept name from user and read all data from
//               that filename and display on screen
//Input : Demo.txt
//Output : Game of thrones is best Tv Show
//Date : 12-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
int main()
{
   int fd = 0,iRet = 0;
   char Fname [50]  = {'\0'};
   char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter The File Name : ");
    scanf("%s",&Fname);

    fd = open(Fname,O_RDONLY);
    

    if(fd == -1)
    {
        printf("Unable to allocate the memory");
    }
    else
    {
       printf("File is opened successfully\n");
       while((iRet = read(fd , Buffer, BUFFER_SIZE))!= 0)
       {
          write(1, Buffer ,iRet);
          memset(Buffer , 0 , BUFFER_SIZE);
       }
    }
    printf("%s",Buffer);
    close(fd);


    return 0;
}