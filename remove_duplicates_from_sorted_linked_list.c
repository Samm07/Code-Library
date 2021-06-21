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
        return temp;

    NODE *a;
    a=head;
    while(a->next)
    {
        a=a->next;
    }

    a->next=temp;
    return head;
}

NODE* remove_duplicates(NODE *head)
{
    NODE *start,*end;
    start=head;
    end=head->next;

    while(start!=NULL)
    {
        if(end->next==NULL)
            break;
        end=start->next;
        while(start->data==end->data)
        {
            //printf("--%d ",end->data);
            end=end->next;
        }
        start->next=end;


        start=start->next;
        //printf("\n__%d ",start->data);
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

            case 2: printf("Enter the number: ");
                    scanf("%d",&x);
                    head=Insert(head,x);
                    break;

            case 3: head=remove_duplicates(head);
                    break;
        }
    }
}
