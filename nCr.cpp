#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,r;
        cin>>n>>r;
        if(n>=r)
        {
            long long int dp[1001];
            dp[0]=1;
            for(int i=1;i<=n;i++)
            {
                dp[i]=(i*dp[i-1])%1000000007;
            }
            cout<<(dp[n]/(dp[n-r]*dp[r]))%1000000007<<endl;
        }
        else
            cout<<"0\n";
    }
}