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
        long long int dp[n+1],i;
        for(i=0;i<n+1;i++)
        {
            if(i<=2)
                dp[i]=i;  //initialisation portion
            else
                dp[i]=(dp[i-1]+(i-1)*dp[i-2])%1000000007;
        }
        for(i=0;i<n+1;i++)
            cout<<dp[i]<<" ";
        cout<<dp[n]<<endl;
    }
	return 0;
}