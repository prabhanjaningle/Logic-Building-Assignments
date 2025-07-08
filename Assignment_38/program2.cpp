 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : generic program to find largest number from three numbers.
//Date : 08-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

template<class T>
T Max(T no1 , T no2 , T no3)
{
    if(no1 > no2 && no1 > no3)
    {
        return no1;
    }
    else if(no2 > no1 && no2 > no3)
    {
        return no2;
    }
    else if(no3 > no2 && no3 > no1)
    {
        return no3;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iRet = Max(10,20,30);
    printf("%d\n",iRet);

    float fRet = Max(10.0f,20.0f,30.0f);
    printf("%f",fRet);
    return 0;
}
