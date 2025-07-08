 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : generic program to accept N values from user and return addition of that values.
//Date : 08-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

template<class T>
T AddN(T *arr, int iSize)
{
    T sum = 0;
    int i = 0;
    if(iSize < 2)
    {
        return -1;
    }
    for(i = 0;i<iSize;i++)
    {
        sum =sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr,5);
    printf("%d\n",iSum);

    float fSum = AddN(brr,4);
    printf("%f",fSum);


    return 0;
}
