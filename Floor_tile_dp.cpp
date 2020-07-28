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
	    int dp[n+1],i;
        //initialization
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(i=3;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        /*for(i=0;i<n+1;i++)
            cout<<dp[i]<<" ";
        cout<<endl;*/
        cout<<dp[n]<<endl;
    }
	return 0;
}