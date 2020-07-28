#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int wt[N],val[N],i,W,j;
        cin>>W;
        for(i=0;i<N;i++)
            cin>>val[i];
        for(i=0;i<N;i++)
            cin>>wt[i];
        int dp[N+1][W+1];
        for(i=0;i<=N;i++)
            for(j=0;j<=W;j++)
                if(i==0 || j==0)
                    dp[i][j]=0;
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=W;j++)
            {
                if(wt[i-1]<=j)
                {
                    dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        for(i=0;i<=N;i++)
        {
            for(j=0;j<=W;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
