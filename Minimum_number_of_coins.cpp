#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int val;
        cin>>val;
        int coins[]={1,2,5,10,20,50,100,200,500,2000};
        int n=sizeof(coins)/sizeof(int);
        //cout<<n<<endl;
        int dp[n+1][val+1],i,j;
        //initialisation
        for(j=0;j<val+1;j++)
            dp[0][j]=INT_MAX-1;
        for(i=1;i<n+1;i++)
            dp[i][0]=0;
        //dp Top-down approach
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<val+1;j++)
            {
                if(i==1 && j%coins[i-1]==0)
                    dp[i][j]=j/coins[i-1];
                else if(coins[i-1]<=j)
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        for(i=0;i<n+1;i++)
        {
            if(i>0)
                cout<<coins[i-1]<<":";
            for(j=0;j<val+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        //print the coins
        i=n;j=val;
        vector<int> vec;
        while(i>0 && j>0)
        {
            if(coins[i-1]>j)
                i--;
            else if(coins[i-1]<=j && dp[i][j]==1+dp[i][j-coins[i-1]])
            {
                j=j-coins[i-1];
                vec.push_back(coins[i-1]);
            }
        }
        for(i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";
    }
    return 0;
}