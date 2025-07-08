 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Author : Prabhanjan Sanjay Ingle
//Description : Write a program which display all palindrome numbers of list
//Input : 10->282->303->6->50->30   
//output : 282 303
//Date : 08-07-2025
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

void DisplayPalindrome(PNODE First)
{
    PNODE temp = NULL;
    temp = First;
    int iDigit = 0,iRev = 0,iCom = 0;
    while(temp != NULL)
    {
        iCom = temp ->data;
        iRev = 0;
        while(temp -> data != 0)
        {
            iDigit = (temp ->data) % 10;
            iRev = iRev * 10 + iDigit;
            temp -> data = (temp -> data)/10;

        }
        if(iRev == iCom && iRev > 9)
        {
            printf("%d ",iRev);
        }
        
        temp = temp -> next;
    }

}

int main()
{
    PNODE head = NULL;
    int data = 0,iRet = 0;

    InsertFirst(&head , 70);
    InsertFirst(&head , 282);
    InsertFirst(&head , 505);
    InsertFirst(&head , 7);
    InsertFirst(&head , 5);
    InsertFirst(&head , 20);
    InsertFirst(&head , 60);


    Display(head);
    printf("\n");

    DisplayPalindrome(head);

}