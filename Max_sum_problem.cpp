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
        int dp[n+1];
        //initia lization
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        dp[4]=4;
        for(int i=5;i<n+1;i++)
        {
            dp[i]=max(i,(dp[i/2])+(dp[i/3])+(dp[i/4]));
        }
        /*for(int i=0;i<n+1;i++)
            cout<<dp[i]<<" ";*/
        cout<<dp[n]<<endl;
    }
	return 0;
}