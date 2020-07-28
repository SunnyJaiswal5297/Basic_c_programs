#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.length();
        int a[n],dp[n],i,j;
        for(i=0;i<n;i++)
            a[i]=str[i]-'a'+1;
        memset(dp,1,sizeof(dp));
        for(i=0;i<n;i++)
            dp[i]=1;
        int maxval=1;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
                if(a[j]<=a[i] && dp[j]+1>dp[i])
                {
                    dp[i]=dp[j]+1;
                    maxval=max(maxval,dp[i]);
                }
        }
        cout<<maxval<<endl;
    }
    return 0;
}