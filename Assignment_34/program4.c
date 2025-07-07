 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which returns largest element from singly linear Linked List 
//Input : 10->20->30->40->50->30   
//output : 50
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

int Maximum(PNODE First)
{
    int iMax = 0;
    PNODE temp = NULL;
    temp = First;
    iMax = temp -> data;

    if(temp == NULL)
    {
        return 0;
    }

    while(temp != NULL)
    {
        if((temp -> data) > iMax)
        {
            iMax = temp -> data;
        } 
        temp = temp -> next;
        
    }
    return iMax;

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

    iRet = Maximum(head);

    if(iRet == 0)
    {
        printf("LL is empty");
    }
    else
    {
        printf("Maximum number is : %d",iRet);
    }
   
    

}

