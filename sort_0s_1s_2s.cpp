#include<iostream>
using namespace std;

int main()
{
    int n;

    FILE *fp=fopen("input.txt", "r");
    fscanf(fp, "%d", &n);

    int arr[n];

    int i;
    int c0=0,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&arr[i]);
        if(arr[i]==0)
            c0+=1;
        else if(arr[i]==1)
            c1+=1;
        else if(arr[i]==2)
            c2+=1;
        else
            cout<<"\nInvalid String";
    }

    int arr2[n];

    i=0;
    while(c0>0)
    {
        arr2[i]=0;
        i+=1;
        c0-=1;
    }
    while(c1>0)
    {
        arr2[i]=1;
        i+=1;
        c1-=1;
    }while(c2>0)
    {
        arr2[i]=2;
        i+=1;
        c2-=1;
    }

    cout<<endl;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }

    

    
}