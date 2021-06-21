#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(6);

    vector<int> v3;
    v3.push_back(8);
    v3.push_back(10);

    vector<int> v4;
    v4.push_back(15);
    v4.push_back(18);

    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    for(auto interval : v)
    {
        printf("%d %d\n",interval[0],interval[1]);
    }
    sort(v.begin(), v.end());

    vector<vector<int>> merged;

    for(auto interval : v)
    {
        if(merged.empty())
        {
            merged.push_back(interval);
        }

        if(merged.back()[1] > interval[0])
        {
            merged.back()[1]=max(merged.back()[1], interval[1]);
        }
        else
        {
            merged.push_back(interval);
        }
    }

    printf("\nMerged: \n");
    for(auto interval : merged)
    {
        printf("%d %d\n",interval[0],interval[1]);
    }

}