#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
    int dp[100001];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=100000;i++)
        dp[i]=dp[i-1]+dp[i-2];
	while(t--)
	{
        long long int n,i,j;
        cin>>n;
        cout<<dp[n]<<endl;
    }
	return 0;
}