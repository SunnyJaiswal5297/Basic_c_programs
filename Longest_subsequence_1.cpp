#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int dp[n],m=0;
        for(i=0;i<n;i++)
            dp[i]=1;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(abs(a[j]-a[i])==1 && dp[j]+1>dp[i])
                    dp[i]=dp[j]+1;
                m=max(m,dp[i]);
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
