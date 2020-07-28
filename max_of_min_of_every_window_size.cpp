#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int dp[n][n+1],m=0;
        for(i=0;i<n;i++)
        {
            dp[0][i]=a[i];
            m=max(m,a[i]);
        }
        dp[0][n]=m;
        for(i=1;i<n;i++)
        {
            m=0;
            for(j=0;j<n-i;j++)
            {
                dp[i][j]=min(dp[i-1][j],dp[i-1][j+1]);
                m=max(m,dp[i][j]);
            }
            dp[i][n]=m;
        }
        for(i=0;i<n;i++)
            cout<<dp[i][n]<<" ";
        cout<<endl;
    }
    return 0;
}