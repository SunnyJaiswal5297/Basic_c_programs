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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int dp[n][n]={{0}},j;
        //initialisaition
        for(i=1;i<n;i++)
            dp[i][i]=0;
        for(i=1;i<n-1;i++)
        {
            for(j=1;j<n-i;j++)
            {
                dp[j][j+i]=min((dp[j+1][j+i]+a[j-1]*a[j]*a[j+i]),
                                (dp[j][j+i-1]+a[j-1]*a[j+i-1]*a[j+i]));
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}