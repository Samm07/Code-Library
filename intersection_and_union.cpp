#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void Union(vector<int> v1, vector<int> v2)
{
    set<int> s;

    for(int i=0;i<v1.size();i++)
        s.insert(v1[i]);

    for(int i=0;i<v2.size();i++)
        s.insert(v2[i]);

    cout<<"\nUnion: ";
    for(auto x:s)
        cout<<x<<"  ";
}

void Intersection(vector<int> v1, vector<int> v2)
{
    set<int> s;

    for(auto x:v1)
        s.insert(x);

    cout<<"\nIntersection: ";
    for(auto x:v2)
    {
        if(s.find(x)!=s.end())
            cout<<x<<"  ";
    }
}


int main()
{
    FILE *fp=fopen("input.txt","r");
    int n;
    fscanf(fp,"%d",&n);

    int i;
    int arr1[n], arr2[n];
    vector<int> v1,v2;

    int x;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&x);
        v1.push_back(x);
    }
    
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&x);
        v2.push_back(x);
    }

    Union(v1,v2);
    Intersection(v1,v2);
}