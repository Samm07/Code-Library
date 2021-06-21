#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>

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

int findIndex(string str, int si, int ei)
{
    if(si>ei)
        return -1;

    int index=-1;
    stack<char> s;

    for(int i=si; i<=ei; i++)
    {
        if(str[i]=='(')
        {
            s.push(str[si]);
        }

        else if(str[i]==')')
        {
            if(s.top()=='(')
                s.pop();

            if(s.empty())
                return i;
        }
    }

    return -1;



}

NODE* treeFromString(string str, int si, int ei)
{
    if(si>ei)
        return NULL;

    NODE *root=newNode(str[si]-'0');

    int index=-1;

    if(si+1<=ei && str[si+1]=='(')
    {
        index=findIndex(str, si+1, ei);
    }

    if(index!=-1)
    {
        root->left = treeFromString(str, si+2, index-1);
        root->right = treeFromString(str, index+2, ei-1);
    }

    return root;
}

void preorder(NODE *root)
{
    if(!root)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    string str="4(2(3)(1))(6(5))";
    NODE *root= treeFromString(str, 0, str.length()-1);
    preorder(root);
    

      
}