 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which returns first occurance(Position) of given element from singly linear Linked List 
//Input : 10->20->30->40->50   Number : 30
//output : 3
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

int SearchFirstOcc(PNODE First , int No)
{
    int iCnt = 1;
    PNODE temp= NULL;
    temp = First;
    
    while(temp != NULL)
    {
        if(temp -> data == No)
        {
            break;
        }
        iCnt ++;
        temp = temp -> next;
    }

    if(temp == NULL)
    {
        return 0;
    }
    else
    {
        return iCnt;
    }

}

int main()
{
    PNODE head = NULL;
    int data = 0,iRet = 0;

    InsertFirst(&head , 101);
    InsertFirst(&head , 51);
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);
    printf("\n");

    printf("Enter your Number : ");
    scanf("%d" ,&data);

    iRet = SearchFirstOcc(head,data);

    if(iRet == 0)
    {
        printf("Element Not found");
    }
    else
    {
        printf("Element is present at Position : %d",iRet);
    }

}

