#include<stdio.h>
#include<stdlib.h>
#include "menu.c"

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

void menu();

void Print(NODE *head)
{
    if(head==NULL)
    {
        printf("\nList is empty");
        return;
    }

    NODE *temp;
    temp=head;

    printf("\nList: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

NODE* insert(NODE *head,int x)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));

    temp->data=x;

    temp->next=head;
    return temp;
}

int middle(NODE *head)
{
    NODE *slow;
    NODE *fast;

    slow=head;
    fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow->data;
}

int main()
{
    NODE *head;
    head=NULL;

    int choice,x;

    while(1)
    {
        menu();

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: Print(head);
                    break;

            case 2: printf("Enter the value: ");
                    scanf("%d",&x);
                    head=insert(head,x);
                    break;

            case 3: x=middle(head);
                    printf("\nMiddle: %d",x);
                    break;
        }
    }
}
