#include<iostream>
using namespace std;

int main()
{
    FILE *fp=fopen("input.txt","r");

    int n;
    fscanf(fp,"%d",&n);

    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&arr[i]);
    }

    int jumps=0;
    int index=0;
    int x;

    while(index<n)
    {
        x=arr[index];
        index=index+x;
        jumps+=1;
    }

    printf("%d ",jumps);
    
}