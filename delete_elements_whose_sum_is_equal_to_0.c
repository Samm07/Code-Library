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
    if(head==NULL)
    {
        printf("List is empty");
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

NODE* Insert(NODE *head,int x)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));
    temp->data=x;

    NODE *a;
    a=head;

    if(head==NULL)
    {
        temp->next=head;
        return temp;
    }

    while(a->next!=NULL)
    {
        a=a->next;
    }

    a->next=temp;
    temp->next=NULL;
    return head;
}

NODE* delete_elements(NODE *head)
{
    NODE *start;
    NODE *end;
    NODE *prev;


    start=head;
    prev=NULL;
    int sum=0,modified=0;


    while(start->next!=NULL)
    {
        sum=start->data;
        modified=0;
        end=start->next;
        //printf("________%d\n",start->data);

        while(end!=NULL)
        {
            sum+=end->data;
            if(sum==0)
            {
                prev->next=end->next;
                modified=1;
                break;
            }
            end=end->next;
        }

        //if(!modified)
        {
            prev=start;
            start=start->next;
        }
    }

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

            case 3: head=delete_elements(head);
                    break;
        }
    }
}
