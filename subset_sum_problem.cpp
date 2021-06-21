#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j;
    int nums[n];
    for(i=0;i<n;i++)    
        cin>>nums[i];

    int sum;
    cin>>sum;

    bool dp[n+1][sum+1];

    for(i=0;i<=n;i++)
    {
        dp[i][0]=true;
    }

    for(i=1;i<=sum;i++)
    {
        dp[0][i]=false;
    }



    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(dp[i-1][j]==true)
                dp[i][j]=true;

            else
            {
                if(j<nums[i-1])
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j-nums[i-1]];
            }
        }
    }

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
        {
            cout<<dp[i][j]<<"   ";
        }
        cout<<endl; 
    }
    
}