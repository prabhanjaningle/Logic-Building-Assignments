 ////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Take A number of elements from user and Give Difference between summation
//              of odd and even number
//Input : Number of elements : 4
//Elements : 1 2 3 4
//Output : 2
//Date : 08-06-2025
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0,iSumEven = 0,iSumOdd = 0,iDiff = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
            
        }
        else if((Arr[iCnt]%2) != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
          
        }
        iDiff = iSumEven - iSumOdd;

        

    }
    return iDiff;
    

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

    iRet = Difference(p,iSize);
    printf("Result is : %d",iRet);
    free(p);




    return 0;

    
}