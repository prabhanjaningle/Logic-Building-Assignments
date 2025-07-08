///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : generic program to accept N values and reverse the contents.  
/*
    Input :   10   20   30   10   30   40   10   40   10  
    Output :  10   40   10   40   30   30   10   20   10
*/
//Date : 08-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>

void Reverse(T *arr, int iSize)
{
    T brr[iSize] = {0};
    int iCnt1 = 0,iCnt2 = iSize - 1,temp = 0;
    for(iCnt1 = 0; iCnt1 < iCnt2; iCnt1++,iCnt2--)
    {
        temp = arr[iCnt1];
        arr[iCnt1] = arr[iCnt2];
        arr[iCnt2] = temp;
    }
    cout << "\n";
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";   // 10  20  30  10  30  40  10  40  10
    }

    Reverse(arr,9);

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";   // 10  40  10  40  30  30  10  20  10
    }

    return 0;
}