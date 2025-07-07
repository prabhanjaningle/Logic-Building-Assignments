 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which returns all perfect numbers present in Linked List 
//Input : 10->28->30->6->50->30   
//output : 28 6
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

void DisplayPerfect(PNODE First)
{
    PNODE temp = NULL;
    int iCnt = 0,iSum = 0;
    temp = First;
    while(temp != NULL)
    {
        for(iCnt = 1,iSum = 0; iCnt <= ((temp -> data)/2);iCnt ++)
        {
            if(((temp->data)%iCnt)== 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == (temp -> data))
        {
            printf("%d  ",temp ->data);
        }
        temp = temp -> next;
    }

}

int main()
{
    PNODE head = NULL;
    int data = 0,iRet = 0;

    InsertFirst(&head , 70);
    InsertFirst(&head , 28);
    InsertFirst(&head , 50);
    InsertFirst(&head , 6);
    InsertFirst(&head , 30);
    InsertFirst(&head , 20);
    InsertFirst(&head , 10);


    Display(head);
    printf("\n");

    DisplayPerfect(head);

}