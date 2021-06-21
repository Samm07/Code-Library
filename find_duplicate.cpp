#include<iostream>
#include<vector>
using namespace std;

int main()
{
    FILE *fp=fopen("input.txt","r");

    int n;
    fscanf(fp,"%d",&n);

    vector<int> v;
    int i,x;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&x);
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    // Check for repetitive values
    
}