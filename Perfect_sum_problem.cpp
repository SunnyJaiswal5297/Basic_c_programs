#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>sum;
        int dp[n+1][sum+1];
        //initialisation
        for(i=0;i<n+1;i++)
            dp[i][0]=1;
        for(j=1;j<sum+1;j++)
            dp[0][j]=0;
        //perfect sum logic
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<sum+1;j++)
            {
                if(a[i-1]<=j)
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<sum+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        cout<<dp[n][sum]<<endl;
    }
    return 0;
}
/*
6
2 3 5 6 8 10
10
ans=3;
*/