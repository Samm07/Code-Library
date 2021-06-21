#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={7,2,3,0,5,10,3,12,18};
    int n=9;

    int lt[n][n];
    int i,j,max;


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
                lt[i][j]=0;
            else if(i==j)
            {
                lt[i][j]=j;
            }
            else
            {
                max=i;
                for(int k=i+1;k<=j;k++)
                {
                    if(arr[k]>arr[max])
                        max=k;
                }
                lt[i][j]=max;
            }
            cout<<lt[i][j]<<"   ";
        }
        cout<<endl;
    }
    

    

}