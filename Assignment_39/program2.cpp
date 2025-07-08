 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : generic program to accept N values and count frequency of any specific 
//              value.

/*
        Input :  10   20   30   10   30   40   10   40   10

        Value to check frequency : 10

        Output :    4
*/
//Date : 08-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>

int Frequency(T *arr, int iSize, T iNo)
{
    int iCnt = 0,iFrq = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iFrq++;
        }
    } 
    return iFrq;
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    printf("%d",iRet); // 4
    return 0;
}