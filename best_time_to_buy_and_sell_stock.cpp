#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    FILE *fp=fopen("input.txt","r");

    int n;
    fscanf(fp,"%d",&n);

    int i,x;
    vector<int> prices;
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&x);
        prices.push_back(x);
    }

    bool bought=false;
        
    int MIN;
    
    vector<int> P = prices;
    sort(P.begin(),P.end());
    MIN=P[0];

    for(auto i:prices)
    {
        printf("%d ",i);
    }

    printf("MIN: %d\n",MIN);
    
    int MAX=0;
    
    for(auto i : prices)
    {
        if(i==MIN)
        {
            bought=true;
        }
        
        if(bought==true)
        {
            if(i>MAX)
            {
                MAX=i;
                printf("MAX: %d\n",MAX);
            }
        }
    }
    
    printf("Profit: %d",MAX-MIN);
}
