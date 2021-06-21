#include<iostream>
using namespace std;

int main()
{
    int n;

    FILE *fp=fopen("input.txt", "r");
    fscanf(fp, "%d", &n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&arr[i]);
    }

    int start=0,end=n-1;
    int temp;

    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start+=1;
        end-=1;
    }

    for(int j=0;j<n;j++)
    {
        printf("%d  ",arr[j]);
    }


}