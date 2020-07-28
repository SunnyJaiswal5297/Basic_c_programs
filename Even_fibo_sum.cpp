#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
        long long int dp[1000000],i;
        dp[0]=1;
        dp[1]=1;
        int sum=0;i=2;
        while(1)
        {
            dp[i]=dp[i-1]+dp[i-2];
            cout<<dp[i]<<" ";
            if(dp[i]%2==0)
            {
                int temp=sum+dp[i];
                if(dp[i]<=n)
                    sum+=dp[i];
                else
                    break;
            }
            i++;
        }
        cout<<sum<<endl;
    }
	return 0;
}