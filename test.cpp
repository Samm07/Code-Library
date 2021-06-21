#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr1[]={1,4,7,8,10};
    int arr2[]={2,3,9};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);

    int i,j;
    i=j=0;

    while(i<n)
    {
        if(arr1[i]>arr2[0])
        {
            swap(arr1[i],arr2[0]);
            
        }



        i++;
    }

}