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
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        for(i=3;i<n+1;i++)
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        for(i=0;i<n+1;i++)
            cout<<dp[i]<<" ";
        cout<<endl;
        cout<<dp[n]<<endl;
    }
	return 0;
}