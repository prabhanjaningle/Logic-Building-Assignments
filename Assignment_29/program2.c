///////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Application which accept name of file and return count of small characters from it
//Input : Demo.txt    S
//Output : 5
//Date : 12-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

int CountSmall(char Fname[])
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
            if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
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
  
    printf("Enter The File Name : ");
    scanf("%s",&Fname);

    iRet = CountSmall(Fname);
    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}