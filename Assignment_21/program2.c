 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Accept N numbers from user and return Smallest number from it 
//Input : Number of elements : 5
//Elements : 5 8 14 44 5
//Output : 5
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iLength)
{
    int iCnt = 0 , iMin = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        else
        {
            iMin = iMin;
        }
    }
    return iMin;
    
    
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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
  

    iRet = Minimum(p,iSize);

    
        printf("Lowest Number is: %d",iRet);

   
    
    free(p);
    
    return 0;

    
}