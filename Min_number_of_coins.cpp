#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int val,n;
        cin>>val>>n;
        int coins[n],i;
        for(i=0;i<n;i++)
            cin>>coins[i];
        int dp[n+1][val+1],j;
        //initialisation
        i=0;
        for(j=0;j<val+1;j++)
            dp[i][j]=INT_MAX-1;
        j=0;
        for(i=1;i<n+1;i++)
            dp[i][j]=0;
        //initialize the second row :special case
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<val+1;j++)
            {
                if(i==1 && j%coins[i-1]==0)
                    dp[i][j]=j/coins[i-1];
                else
                {
                    if(coins[i-1]<=j)
                        dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                    else
                        dp[i][j]=dp[i-1][j];
                }
            }
        }
        /*for(i=0;i<n+1;i++)
        {
            for(j=1;j<val+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<dp[n][val]<<endl;
    }
    return 0;
}