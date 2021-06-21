#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    FILE *fp=fopen("input.txt","r");

    int n;
    fscanf(fp,"%d",&n);

    int i,x;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&x);
        v.push_back(x);
    }

    map<int,int> m;
    bool flag=false;

    int sum=0;
    for(auto i : v)
    {
        sum+=i;

        if(i==0)
            flag=true;

        else if(m[sum]!=0 || sum==0)
        {
            flag=true;
        }
        m[sum]++;
    }
    
    cout<<flag;
}
