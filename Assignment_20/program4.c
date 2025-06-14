 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Accept N numbers from user and accept Range, Display all elements from 
//              that range 
//Input : Number of elements : 5
//Elements : 5 8 15 44 5
//Starting : 5  Ending : 15
//Output : 5,5,8,15
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>


void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
           printf("%d\n",Arr[iCnt]);
           
        }
       
    }
   
    
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0,iElement1 = 0,iElement2 = 0;
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
    printf("Enter starting: ");
    scanf("%d",&iElement1);
    printf("Enter ending : ");
    scanf("%d",&iElement2);
   

    Range(p,iSize,iElement1,iElement2);
    
    free(p);
    
    return 0;

    
}