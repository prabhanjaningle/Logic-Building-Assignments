 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take A number of elements and NO from user and Display frequency of that NO 
//Input : Number of elements : 4
//Elements : 5 8 15 44
//NO : 44
//Output : 1
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

int Count(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]  == iNo))
        {
            iCount++;
        }
       
    }
    return iCount;
    

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

    iRet = Count(p,iSize,iElement);
    
    free(p);
    printf("Frequncy of Element %d is : %d",iElement,iRet);

    return 0;

    
}
