#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[]={7,2,3,0,5,10,3,12,18};
    int n=sizeof(arr)/sizeof(arr[0]);

    int rootn=sqrt(n);
    
    int lt[rootn];
    int i,j,max;

    for(i=0;i<rootn;i++)
    {
        max=rootn*i;
        for(j=rootn*i+1;j<rootn*i+rootn;j++)
        {
            if(arr[j]>arr[max])
            {
                max=j;
            }
        }
        lt[i]=max;
        cout<<lt[i]<<"   ";
    }



}