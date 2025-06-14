///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Application which accept name from user and Open file of that name
//Input : Demo.txt
//Output : File is successfully Opened.
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

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file");
    }
    else
    {
        printf("file %s successfully opened",Fname);
    }


    return 0;
}