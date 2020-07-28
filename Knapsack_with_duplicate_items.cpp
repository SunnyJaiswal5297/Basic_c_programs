#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,W;
        cin>>n>>W;
        int val[n],weight[n],i,j;
        for(i=0;i<n;i++)
            cin>>val[i];
        for(i=0;i<n;i++)
            cin>>weight[i];
        int dp[n+1][W+1];
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<W+1;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(weight[i-1]<=j)
                    dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i][j-weight[i-1]]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        /*for(i=0;i<n+1;i++)
        {
            for(j=0;j<W+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<dp[n][W]<<endl;
    }
    return  0;
}