#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int costX,costY;
        cin>>costX>>costY;
        string x,y;
        cin>>x;
        cin>>y;
        int n=x.length();
        int m=y.length();
        //LCS of x and y;
        int dp[n+1][m+1],i,j;
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(x[i-1]==y[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        /*for(i=0;i<n+1;i++)
        {
            for(j=0;j<m+1;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        cout<<((n-dp[n][m])*costX+(m-dp[n][m])*costY)<<endl;
    }
    return 0;
}