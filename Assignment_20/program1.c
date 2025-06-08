 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take A number of elements from user and Display frequency of even numbers
//Input : Number of elements : 4
//Elements : 5 8 15 44
//Output : 44
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0,iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 2) == 0))
        {
            iCount++;
        }
       
    }
    return iCount;
    

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0 ;
    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }

    printf("Enter %d elements : \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element no.  :%d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iSize);
    free(p);
    printf("Frequncy of Even numbers : %d",iRet);

    return 0;

    
}