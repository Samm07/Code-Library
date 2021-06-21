#include<iostream>
#include<vector>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node NODE;

NODE *newNode(int x)
{
    NODE *temp=(NODE*)malloc(sizeof(NODE));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

    //             5

    //     2             3

    // 4       7               8

int main()
{
    NODE *root=newNode(5);
    root->left=newNode(2);
    root->right=newNode(3);

    root->left->left=newNode(4);
    root->left->right=newNode(7);

    root->right->right=newNode(8);

      
}