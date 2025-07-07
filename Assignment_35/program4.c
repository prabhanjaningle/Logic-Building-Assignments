 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which returns second maximum number from linked list.
//Input : 10->28->30->6->50->30   
//output : 154
//Date : 07-07-2025
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

int SecMaximum(PNODE First)
{
    PNODE temp = NULL;
    int iMax = 0,iSecMax = 0;
    temp = First;
    iMax = temp -> data;
    while(temp != NULL)
    {
        if((temp -> data)>iMax)
        {
            iSecMax = iMax;
            iMax = temp -> data;
        }
        
        temp = temp -> next;
    }

    return  iSecMax;

}

int main()
{
    PNODE head = NULL;
    int data = 0,iRet = 0;

    InsertFirst(&head , 70);
    InsertFirst(&head , 28);
    InsertFirst(&head , 50);
    InsertFirst(&head , 7);
    InsertFirst(&head , 5);
    InsertFirst(&head , 20);
    InsertFirst(&head , 60);


    Display(head);
    printf("\n");

    iRet = SecMaximum(head);
    printf("Second maximum number is : %d",iRet);

}