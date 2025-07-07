 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which returns last occurance(Position) of given element from singly linear Linked List 
//Input : 10->20->30->40->50->30   Number : 30
//output : 6
//Date : 25-06-2025
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PNODE *First,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;
    if(*First == NULL)
    {
        *First = newn;
    }

    else
    {
        newn -> next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d ->",*First);
        First = First -> next;
    }
    printf("NULL");
    
}

int SearchLastOcc(PNODE First , int No)
{
    int iCnt = 1;
    int iCount = 0;
    PNODE temp= NULL;
    temp = First;
    
    while(temp != NULL)
    {
        if(temp -> data == No)
        {
            iCount = iCnt;
        }
        iCnt ++;
        temp = temp -> next;
    }

    if(iCount == 0)
    {
        return 0;
    }
    else
    {
        return iCount;
    }

}

int main()
{
    PNODE head = NULL;
    int data = 0,iRet = 0;

    InsertFirst(&head , 70);
    InsertFirst(&head , 30);
    InsertFirst(&head , 50);
    InsertFirst(&head , 40);
    InsertFirst(&head , 30);
    InsertFirst(&head , 20);
    InsertFirst(&head , 10);


    Display(head);
    printf("\n");

    printf("Enter your Number : ");
    scanf("%d" ,&data);

    iRet = SearchLastOcc(head,data);

    if(iRet == 0)
    {
        printf("Element Not found");
    }
    else
    {
        printf("Element is present at Position : %d",iRet);
    }

}

