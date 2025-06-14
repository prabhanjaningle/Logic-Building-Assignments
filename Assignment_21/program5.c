 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :   Accept N numbers from user and display summation of digits of each 
//                number.  
//Input : Number of elements : 5
//Elements : 5 8 14 444 5
//Output : 5 8 5 12 5
//Date : 09-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>


void DigitSum(int Arr[],int iLength)
{
    int iCnt = 0,iCount = 0,iTemp = 0,iDigits = 0, iSum = 0; 
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp = Arr[iCnt];
        iSum = 0;
        while(iTemp != 0)
        {
            iDigits = iTemp % 10;
            iTemp = iTemp/10;
            iSum = iSum + iDigits;
           
        }
        printf("%d ",iSum);
        
    }
    
   

   
    
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
  
    DigitSum(p,iSize);
    
    free(p);
    
    return 0;

    
}