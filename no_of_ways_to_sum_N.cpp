#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int m,n;
        cin>>m>>n;
        int a[m],i;
        for(i=0;i<m;i++)
            cin>>a[i];
        long long int dp[n+1],j;
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(j=1;j<n+1;j++)
        {
            for(i=0;i<m;i++)
            {
                if(a[i]<=j)
                    dp[j]+=dp[j-a[i]];
            }
            for(int k=0;k<n+1;k++)
                cout<<dp[k]<<" ";
            cout<<endl;
        }
        long long int l=dp[n]%(1000000007);
        cout<<l<<endl;
    }
    return 0;
}