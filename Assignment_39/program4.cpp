 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write generic program to accept N values and search last occurrence of any 
//              specific value.

/*
    Input : 10   20   30   10   30   40   10   40   10  
    Value to search : 40  
    Output : 8
*/
//Date : 08-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
template<class T>

int SearchLast(T *arr, int iSize, T iNo)
{
    int iCnt = 0,iMark = iSize;
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iMark = iCnt;
        }
    }
    if(iMark == iSize)
    {
        return -1;
        
    }
    else
    {
        return iMark+1;
    }
}

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    printf("%d",iRet); // 8
    return 0;
}