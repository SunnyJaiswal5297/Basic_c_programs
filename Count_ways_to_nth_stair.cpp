#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,i,j;
        cin>>n;
        int dp[3][n+1];
        //initialisation
        for(j=1;j<n+1;j++)
            dp[0][j]=0;
        for(i=0;i<3;i++)
            dp[i][0]=1;
        for(i=1;i<3;i++)
        {
            for(j=1;j<n+1;j++)
            {
                if(i<=j)
                    dp[i][j]=dp[i-1][j]+dp[i][j-i];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<n+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        cout<<dp[2][n]<<endl;
    }
	return 0;
}