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
        int choices[3]={3,5,10};
        int dp[4][n+1];
        //intialisation
        int i=0,j=0;
        for(j=1;j<=n;j++)
            dp[0][j]=0;
        j=0;
        for(i=0;i<=4;i++)
            dp[i][j]=1;
        for(i=1;i<4;i++)
        {
            for(j=1;j<n+1;j++)
            {
                if(choices[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-choices[i-1]];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        /*for(i=0;i<4;i++)
        {
            for(j=0;j<n+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<dp[3][n]<<endl;
    }
	return 0;
}