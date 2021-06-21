#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;

void Print(NODE *head)
{
    if(head==NULL)
    {
        printf("List is empty\n\n");
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

}

NODE* insert_beginning(NODE *head,int x)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));

    temp->data=x;

    temp->next=head;
    head=temp;

    return head;
}

NODE* insert_end(NODE *head,int x)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));

    temp->data=x;

    NODE *a;
    a=head;

    while(a->next!=NULL)
    {
        a=a->next;
    }

    a->next=temp;
    temp->next=NULL;

    return head;
}

NODE* insert_pos(NODE *head,int x,int n)
{
    NODE *temp;
    temp=(NODE *)malloc(sizeof(NODE));

    temp->data=x;

    if(n==1)
    {
        temp->next=head;
        return temp;
    }

    int i;
    NODE *a;
    a=head;

    for(i=0;i<n-2;i++)
    {
        a=a->next;
    }

    temp->next=a->next;
    a->next=temp;


    return head;
}

NODE* delete_beginning(NODE *head)
{
    if(head==NULL)
    {
        printf("\nList is empty");
        return head;
    }

    NODE *temp;
    temp=head;

    head=temp->next;
    free(temp);

    return head;
}

NODE* delete_end(NODE *head)
{
    NODE *a,*p;
    p=NULL;
    a=head;

    if(head==NULL)
    {
        printf("\nList is empty");
        return head;
    }

    while(a->next!=NULL)
    {
        p=a;
        a=a->next;
    }

    p->next=NULL;
    free(a);

    return head;
}

NODE* delete_pos(NODE *head,int n)
{
    NODE *a;
    if(n==1)
    {
        a=head;
        head=a->next;
        free(a);
        return head;
    }


    NODE *prev;
    a=head;
    prev=NULL;

    int i;
    for(i=0;i<n-1;i++)
    {
        prev=a;
        a=a->next;
    }

    prev->next=a->next;
    free(a);

    return head;

}

NODE* reverse_list(NODE *head)
{
    NODE *prev,*curr,*next;

    prev=NULL;
    curr=head;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;
    return head;
}

NODE* reverse_list2(NODE *head)
{
    NODE *prev,*curr,*next;
    curr=head;
    prev=NULL;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev;
    return head;
}

void print_recursion(NODE *head)
{
    if(head==NULL)
    {
        return;
    }

    printf("%d ",head->data);
    print_recursion(head->next);
}

void print_reverse_recursion(NODE *head)
{
    if(head==NULL)
    {
        return;
    }

    print_reverse_recursion(head->next);
    printf("%d ",head->data);
}

void reverse_recursion(NODE *head)
{
    NODE *p;
    NODE *q;
    p=head;
    if(p->next!=NULL)
    {
        head=p;
        return;
    }

    reverse_recursion(p->next);

    q=p->next;
    q->next=p;
    p->next=NULL;
}

int main()
{
    NODE *head;
    head=NULL;

    int choice,x,pos;
    while(1)
    {
        printf("\n\n1.Print the list\n");
        printf("2.Insert at the beginning\n");
        printf("3.Insert at the end\n");
        printf("4.Insert at the position\n");
        printf("5.Delete at the beginning\n");
        printf("6.Delete at the end\n");
        printf("7.Delete at the position\n");
        printf("8.Reverse the list\n");
        printf("9.Print the list using recursion\n");
        printf("10.Print reverse the list using recursion\n");
        printf("11.Reverse the list using recursion\n");

        printf("\nEnter your choice: ");

        scanf("%d",&choice);

        switch(choice)
        {
            case 1: Print(head);
                    break;

            case 2: printf("Enter the value: ");
                    scanf("%d",&x);
                    head=insert_beginning(head,x);
                    break;

            case 3: printf("Enter the value: ");
                    scanf("%d",&x);
                    head=insert_end(head,x);
                    break;

            case 4: printf("Enter the value: ");
                    scanf("%d",&x);
                    printf("Enter the position: ");
                    scanf("%d",&pos);
                    head=insert_pos(head,x,pos);
                    break;

            case 5: head=delete_beginning(head);
                    break;

            case 6: head=delete_end(head);
                    break;

            case 7: printf("\nEnter the position: ");
                    scanf("%d",&pos);
                    head=delete_pos(head,pos);
                    break;

            case 8: head=reverse_list2(head);
                    break;

            case 9: print_recursion(head);
                    break;

            case 10: print_reverse_recursion(head);
                     break;

            case 11: reverse_recursion(head);
                     break;

        }
    }
}

