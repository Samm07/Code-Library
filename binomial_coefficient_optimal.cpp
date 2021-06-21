#include<iostream>
#include <cstring>
using namespace std;

int bcOptimal(int n, int k)
{
    int dp[k+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;

    for(int p=0;p<=k;p++)
        {
                cout<<dp[p]<<"    ";
        }
        cout<<endl;


    int i,j,p;
    for(i=1;i<=n;i++)
    {
        for(j=min(i,k);j>0;j--)
        {
            dp[j]=dp[j]+dp[j-1];
        }
        for(p=0;p<=k;p++)
        {
                cout<<dp[p]<<"    ";
        }
        cout<<endl;
    }

    
    return dp[k];


}

int main()
{
    int n,k;
    // cin>>n>>k;

    n=7;
    k=3;

    int nCk;
    nCk=bcOptimal(n,k);
    cout<<nCk;
}