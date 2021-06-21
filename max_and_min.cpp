#include<iostream>
using namespace std;

int main()
{

    FILE *fp=fopen("input.txt","r");

    int n;
    fscanf(fp,"%d",&n);
    

    int arr[n];
    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&arr[i]);
    }


    int min=arr[0],max=arr[0];
    for(int j=0;j<n;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
        else if(arr[j]<min)
        {
            min=arr[j];
        }
    }

    printf("%d %d",max,min);


}