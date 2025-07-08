 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : 
//      1. SearchLast()  - Search last occurrence of number  
//      2. EvenCount()  - Count even elements  
//      3. OddCount()  - Count odd elements  
//      4. SumAll(). - sum of all elements
//Date : 08-07-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
        Array(int value = 10)
        {
            cout<<"Inside Connstructor\n";

            this->size = value;
            this->Arr = new int[size];
        }

        Array(Array &ref)
        {
            cout<<"Inside copy connstructor\n";

            this->size = ref.size;
            this->Arr = new int[this->size];

            for(int i = 0;i<size;i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside Destructor\n";

            delete []Arr;
        }
    
    inline void Accept();
    inline void Display();

};

void Array::Accept()
{
    cout<<"Please enter the values\n";

    for(int i = 0;i<this->size;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are\n";

    for(int i = 0;i<this->size;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(no)
        {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }
    
    if(i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::Frequency(int value)
{
    int icnt = 0;

    for(int i = 0; i<size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }

    return icnt;
}

int ArrSearch::SearchLast(int value)
{
    int iCnt = 0;
    int iMark = 0;
    for(iCnt = 0; iCnt < size; iCnt++)
    {
        if(Arr[iCnt] == value)
        {
            iMark = iCnt+1;
        }
        
    }
    if(iMark == 0)
    {
        return -1;
    }
    else
    {
        return iMark;
    }

    
}

int ArrSearch::EvenCount()
{
    int iCnt = 0,iEvenCount = 0;
    for(iCnt = 0; iCnt < size;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCount ++;
        }

    }
    return iEvenCount;
}

int ArrSearch::OddCount()
{
    int iCnt = 0,iOddCount = 0;
    for(iCnt = 0; iCnt < size;iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iOddCount ++;
        }

    }
    return iOddCount;
}

int ArrSearch::SumAll()
{
    int iCnt = 0,iSum = 0;
    for(iCnt = 0;iCnt < size;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret = sobj1.Frequency(11);

    cout<<"Frequency is "<<iret<<"\n";

    iret = sobj1.SearchFirst(11);

    cout<<"First occurance is "<<iret<<"\n";

    iret = sobj1.SearchLast(11);

    if(iret == -1)
    {
        cout << "Element is not present"<<"\n";
    }
    else
    {
        cout<<"Last occurance is "<<iret<<"\n";
    }
    
    iret = sobj1.EvenCount();
    cout <<" Even number in Array are : "<<iret<<"\n";

    iret = sobj1.OddCount();
    cout <<" Odd number in Array are : "<<iret<<"\n";

    iret = sobj1.SumAll();
    cout <<" Addition of numbers in Array are : "<<iret<<"\n";
    
    return 0;
}
