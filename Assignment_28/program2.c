///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Application which accept name from user and create file of that name
//Input : Demo.txt
//Output : File is successfully created.
//Date : 12-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


int main()
{
    int fd = 0;
   char Fname [50]  = {'\0'};

    printf("Enter The File Name : ");
    scanf("%s",&Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to allocate the memory");
    }
    else
    {
        printf("file %s successfully created",Fname);
    }


    return 0;
}