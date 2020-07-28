#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        int n=x.length();
        string y=x;
        reverse(y.begin(),y.end());
        //cout<<y<<endl;
        int dp[n+1][n+1],i,j;
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(x[i-1]==y[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        /*for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<(n-dp[n][n])<<endl;
    }
    return 0;
}