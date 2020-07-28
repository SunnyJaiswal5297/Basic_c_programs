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
        long long int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(i=3;i<=n;i++)
            dp[i]=(dp[i-1]+dp[i-2])%1000000007;
        cout<<dp[n]<<endl;
        
    }
	return 0;
}