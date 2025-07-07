 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which returns all addition of all even numbers
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

int DisplayEven(PNODE First)
{
    PNODE temp = NULL;
    int iCnt = 0,iSum = 0;
    temp = First;
    while(temp != NULL)
    {
        if((temp -> data) % 2 == 0)
        {
            iSum = iSum + (temp -> data);
        }
        temp = temp -> next;
    }

    return iSum ;

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
    InsertFirst(&head , 10);


    Display(head);
    printf("\n");

    iRet = DisplayEven(head);
    printf("Addition of even number is : %d",iRet);

}