#include<iostream>
using namespace std;

int bc(int n, int k)
{
    int dp[n+1][k+1];
    int i,j;

    for(i=0;i<=n;i++)
    {
        for(j=0; j<=min(i,k);j++)
        {
            if(j==0 || i==j)                //nc0=1 and ncn=1
            {
                dp[i][j]=1;
            }
            else if(j==1)                   //nC1 = n
                dp[i][j]=i;
            else
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
            
        }
    }

    return dp[n][k];
}

int main()
{
    int n,k;
    // cin>>n>>k;
    n=7;
    k=3;

    int nCk;
    nCk=bc(n,k);
    cout<<nCk;
}