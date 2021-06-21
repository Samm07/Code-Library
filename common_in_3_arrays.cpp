#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    vector<int> b;
    vector<int> c;

    a.push_back(1);
    a.push_back(4);
    a.push_back(2);
    a.push_back(7);
    a.push_back(10);

    b.push_back(2);
    b.push_back(7);
    b.push_back(10);
    b.push_back(55);

    c.push_back(10);
    c.push_back(2);
    c.push_back(11);
    c.push_back(15);

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());

    for(auto i:a)
        printf("%d ",i);

    printf("\n");
    for(auto i:b)
        printf("%d ",i);

    printf("\n");
    for(auto i:c)
        printf("%d ",i);

    int n1,n2,n3;
    n1=a.size();
    n2=b.size();
    n3=c.size();

    int i=0,j=0,k=0;
    vector<int> common;
    while(i<=n1 && j<=n2 && k<=n3)
    {
        if(a[i]==b[j] && a[i]==c[k])
        {
            common.push_back(a[i]);
            i++;
            j++;
            k++;
        }

        else if(a[i]<=b[j] && a[i]<=c[k])
        {
            i++;
        }

        else if(b[j]<=a[i] && b[j]<=c[k])
        {
            j++;
        }

        else
        {
            k++;
        }
        
        
    }

    printf("\nCommon elements: \n");
    for(auto i:common)
        printf("%d ",i);

}