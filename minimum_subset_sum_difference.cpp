#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,sum=0,j=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<endl;
    int dp[n+1][sum+1];
    for(i=0;i<=n;i++)
        dp[i][0]=1;
    for(j=1;j<=sum;j++)
        dp[0][j]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(a[i-1]<=j)
            {
                dp[i][j]= (dp[i-1][j]) or (dp[i-1][j-a[i-1]]);
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    /*for(i=0;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/
    vector<int> vec;
    for(j=0;j<=sum/2;j++)
    {
        if(dp[n][j]==1)
            vec.push_back(j);
    }
    int min=INT_MAX;
    for(auto x:vec)
    {
        if((sum-2*x)<min)
            min=sum-2*x;
    }
    cout<<min<<endl;
    return 0;
}