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

NODE* insert_beginning(NODE *head,int x)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));

    temp->data=x;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        return head;
    }

    temp->next=head;
    return temp;
}

void print_list(NODE *head)
{
    NODE *a;
    a=head;

    printf("\nThe List is:  ");
    while(a!=NULL)
    {
        printf("%d | ",a->data);
        a=a->next;
    }

    printf("\n");
}

int middle(NODE *head)
{
    NODE *fast;
    NODE *slow;
    NODE *a;

    a=fast=slow=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow->data;
}

int main()
{
    NODE *head=NULL;
    int choice,x;

    while(1)
    {
        menu();
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: print_list(head);
                    break;

            case 2: printf("Enter the value: ");
                    scanf("%d",&x);
                    head=insert_beginning(head,x);
                    break;

            case 3: x=middle(head);
                    printf("\nMiddle of the linked list is: %d",x);
                    break;
        }


    }

}
