 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : generic program to accept N values from user and return smallest value.
//Date : 08-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

template<class T>
T Min(T *arr, int iSize)
{
    T compare = arr[0];
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(compare > arr[iCnt])
        {
            compare = arr[iCnt];
        }
    }
    return compare;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(arr,5);
    printf("%d\n",iRet); // 10

    float fRet = Min(brr,4);
    printf("%f",fRet); // 10.0

    return 0;
}

