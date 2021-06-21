#include<iostream>
using namespace std;

int main()
{
    FILE *fp=fopen("input.txt","r");

    int n;
    fscanf(fp, "%d" ,&n);

    int arr[n];
    int i=0;

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&arr[i]);
    }

    int j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int j=0;j<n;j++)
    {
        printf("%d  ",arr[j]);
    }

    int k;
    k=fscanf(fp,"%d",&k);

    printf("%d %d", k, arr[k-1]);
}