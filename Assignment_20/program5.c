 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Accept N numbers from user and return product of all odd elements. 
//Input : Number of elements : 5
//Elements : 5 8 14 44 5
//Output : 25
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>


int OddMul(int Arr[],int iLength)
{
    int iCnt = 0 , iMul = 1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
           iMul = iMul * Arr[iCnt];
           
        }
       
    }
    return iMul;
    
    
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
  

    iRet = OddMul(p,iSize);

    
        printf("Multiplication is : %d",iRet);

   
    
    free(p);
    
    return 0;

    
}