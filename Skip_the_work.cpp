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
        int dp[n+1];
        //initialisation
        dp[0]=a[0];
        dp[1]=a[1];
        for(i=2;i<n;i++)
            dp[i]=min(a[i]+dp[i-1],a[i]+dp[i-2]);
        for(i=0;i<n;i++)
            cout<<dp[i]<<" ";
        cout<<endl;
        cout<<min(dp[n-1],dp[n-2])<<endl;
    }
    return 0;
}