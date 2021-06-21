#include<stdio.h>
#include<stdlib.h>
#include "menu.c"

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

void Print(NODE *head)
{
    NODE *temp;
    temp=head;

    printf("\nList: ");
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

NODE* Insert(NODE *head,int x)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));

    temp->data=x;
    temp->next=NULL;


    if(head==NULL)
    {
        return temp;
    }
    NODE *a;
    a=head;
    while(a->next!=NULL)
    {
        a=a->next;
    }

    a->next=temp;
    return head;
}

NODE* delete_middle_element(NODE *head)
{
    NODE *slow,*fast,*prev;
    slow=fast=head;
    prev=NULL;

    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }

    prev->next=slow->next;
    return head;
}

int main()
{
    NODE *head;
    head=NULL;

    int choice,x;

    while(1)
    {
        menu();
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: Print(head);
                    break;

            case 2: printf("Enter the value: ");
                    scanf("%d",&x);
                    head=Insert(head,x);
                    break;

            case 3: head=delete_middle_element(head);
                    break;
        }
    }
}
