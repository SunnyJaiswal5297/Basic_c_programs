#include<bits/stdc++.h>
using namespace std;

int print_LCS(string a,string b,string c)
{
    int i,j,k;
    int n=a.length();
    int m=b.length();
    int o=c.length();
    int dp[n+1][m+1][o+1];
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<m+1;j++)
        {
            for(k=0;k<o+1;k++)
            {
                if(i==0 || j==0 || k==0)
                    dp[i][j][k]=0;
                else if(a[i-1]==b[j-1] && a[i-1]==c[k-1])
                    dp[i][j][k]=1+dp[i-1][j-1][k-1];
                else
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
            }
        }
    }
    return dp[n][m][o];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,o;
        cin>>n>>m>>o;
        string x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;
        cout<<print_LCS(x,y,z)<<endl;
    }
    return 0;
}