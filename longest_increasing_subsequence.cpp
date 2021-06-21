#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    FILE *fp;
    fp=fopen("input.txt", "r");

    int n;
    fscanf(fp, "%d\n", &n);

    int arr[n];
    int i,j;

    for(i=0;i<n;i++)
        fscanf(fp,"%d ",&arr[i]);

    int lis[n];
    for(i=0;i<n;i++)    
        lis[i]=1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[j]+1>lis[i])
                lis[i]=lis[j]+1;
        }
    }

    int max=1;
    for(i=0;i<n;i++)
    {
        if(lis[i]>max)
            max=lis[i];
    }
    cout<<max;


}
