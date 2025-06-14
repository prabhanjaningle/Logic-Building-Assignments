 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Accept N numbers from user and accept one another number as NO , 
//              return index of last occurrence of that NO.  
//Input : Number of elements : 5
//Elements : 5 8 15 44 5
//iNo : 5
//Output : 4
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iCounter = -1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]  == iNo))
        {
           iCounter = iCnt;
           
        }
       
    }
    if(iCounter == -1)
    {
        return -1;
    }
    else
    {
        return iCounter;
    }
    
    
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0,iElement = 0;
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
    printf("Enter the number : ");
    scanf("%d",&iElement);

    iRet = LastOcc(p,iSize,iElement);

    if(iRet == -1)
    {
        printf("Element %d is not present",iElement);

    }
    else
    {
        printf("Element %d is present at index %d",iElement,iRet);
        
    }
    
    free(p);
    
    return 0;

    
}