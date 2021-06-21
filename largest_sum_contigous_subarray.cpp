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

    int curr_max=arr[0];
    int overall_max=arr[0];

    for(i=1;i<n;i++)
    {
        curr_max=max(arr[i],curr_max+arr[i]);

        if(curr_max>overall_max)
            overall_max=curr_max;
    }

    printf("%d ",overall_max);


}