///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Application which accept name and string from user and write that string
//               at the end of file
//Input : Demo.txt    String : Breaking bad is second best
//Output : Game of thrones is best tv show Breaking bad is second best
//Date : 12-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
int main()
{
   int fd = 0,iRet = 0 ,iSum = 0;
   char Fname [50]  = {'\0'};
   char Buffer[BUFFER_SIZE] = {'\0'};

   char String [50] = {'\0'};
   
   printf("Enter the string you want to print in file : ");
   scanf("%[^\n]s",String);
   getchar();

    printf("Enter The File Name : ");
    scanf("%s",&Fname);

    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to allocate the memory");
    }
    else
    {
       printf("File is opened successfully\n");
       while(String[iCnt] != '\0')
       {
            fd = write(fd,String,sizeOf(String));
            iCnt++;
       }
       
    }
    close(fd);

    return 0;
}