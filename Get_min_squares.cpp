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
        int res=sqrt(n);
        //cout<<res<<endl;
        if(res*res==n)
            cout<<"1\n";
        else
        {
            //apply DP approach
            int dp[res+1][n+1],i,j;
            //initialisation
            for(j=0;j<n+1;j++)
                dp[0][j]=INT_MAX;
            for(i=1;i<res+1;i++)
                dp[i][0]=0;
            for(i=1;i<res+1;i++)
            {
                for(j=1;j<n+1;j++)
                {
                    if(i*i<=j)
                        dp[i][j]=min(dp[i-1][j],1+dp[i][j-i*i]);
                    else
                        dp[i][j]=dp[i-1][j];
                }
            }
            for(i=0;i<res+1;i++)
            {
                for(j=0;j<n+1;j++)
                    cout<<dp[i][j]<<" ";
                cout<<endl;
            }
            cout<<dp[res][n]<<endl;
        }
    }
    return 0;
}