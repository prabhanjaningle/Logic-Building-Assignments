 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take A number of elements from user and check 11 is in it or not
//Input : Number of elements : 4
//Elements : 5 8 15 44
//Output : 44
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0;
    BOOL bChecker = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bChecker = 1;
        }
        
       
    }
    return bChecker;
    

}

int main()
{
    int iSize = 0,  iCnt = 0 ;
    BOOL bRet = 0;
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

    bRet = Check(p,iSize);

    if(bRet == True)
    {
         printf("11 is present");
    }
    else
    {
        printf("11 is not present");

    }
    free(p);
   

    return 0;

    
}