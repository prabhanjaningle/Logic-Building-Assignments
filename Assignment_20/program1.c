 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description :  Accept N numbers from user and accept one another number as NO , 
//               check whether NO is present or not.  
//Input : Number of elements : 4
//Elements : 5 8 15 44  
//No: 5
//Output : True
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
#define True 1
#define False 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    BOOL bRet = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]  == iNo))
        {
            bRet = True;
           
        }
       
    }
    return bRet;
    
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0,iElement = 0;
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
    printf("Enter the number : ");
    scanf("%d",&iElement);

    bRet = Check(p,iSize,iElement);

    if(bRet == True)
    {
        printf("Element %d is present",iElement);

    }
    else
    {
        printf("Element %d is not present",iElement);

    }
    
    free(p);
    
    return 0;

    
}