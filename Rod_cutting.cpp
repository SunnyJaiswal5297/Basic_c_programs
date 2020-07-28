#include<iostream>
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
        int dp[n+1][n+1];
        for(j=0;j<n+1;j++)
            dp[0][j]=0;
        for(i=0;i<n+1;i++)
            dp[i][0]=0;
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<n+1;j++)
            {
                if(i<=j)
                    dp[i][j]=max(dp[i-1][j],(a[i-1]+dp[i][j-i]));
                else
                    dp[i][j]=dp[i-1][j];
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