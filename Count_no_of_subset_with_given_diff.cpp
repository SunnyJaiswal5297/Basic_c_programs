#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,diff,count=0;
    cin>>n>>diff;
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
                dp[i][j]= (dp[i-1][j])+(dp[i-1][j-a[i-1]]);
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=sum;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    //subset1-subset2=diff
    //basiclly we have to count no. of subset s1 with sum as (diff+sum)/2
    int temp=(diff+sum)/2;
    cout<<dp[n][temp]<<endl;
    return 0;
}