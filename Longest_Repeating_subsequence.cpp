#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x,y;
        cin>>x;
        y=x;
        int n=x.length();
        int dp[n+1][n+1],i,j;
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(x[i-1]==y[j-1] && i!=j)
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        cout<<dp[n][n]<<endl;
    }
    return 0;
}