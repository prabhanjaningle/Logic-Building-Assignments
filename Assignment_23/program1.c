#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t %d\t %x\t %o\t \n",iCnt,iCnt,iCnt,iCnt);
        ch++;
    }

}

int main()
{
    DisplayASCII();

    return 0;
}