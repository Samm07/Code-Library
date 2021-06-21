#include<iostream>
using namespace std;

int main()
{
    FILE *fp=fopen("input.txt","r");

    int n;
    fscanf(fp,"%d",&n);

    int arr1[n],arr2[n];
    int i;

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&arr1[i]);
    }

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&arr2[i]);
    }

    int j;

    i=0;
    int temp;
    while(i<=n)
    {
        if(arr1[i]>arr2[0])
        {
            temp=arr1[i];
            arr1[i]=arr2[0];
            arr2[0]=temp;

            j=1;
            temp=arr2[0];
            while(temp>arr2[j])
            {
                arr2[j-1]=arr2[j];
                j+=1;
            }
            arr2[j-1]=temp;
        }
        i+=1;

    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }

}