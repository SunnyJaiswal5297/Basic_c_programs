#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int dp[n+1][n+1],i,j,s=0,maxlen=1,c=1;
    memset(dp,0,sizeof(dp));
    for(i=0;i<n+1;i++)
        dp[i][i]=1;
    for(i=0;i<n-1;i++)
        if(str[i]==str[i+1])
        {
            dp[i][i+1]=1;
            if(c--)
            {
                s=i;
                maxlen=2;
            }
        }
    for(int k=3;k<n+1;k++)
    {
        for(i=0;i<n-k+1;i++)
        {
            //getting ending index;
            j=i+k-1;
            if(str[i]==str[j] && dp[i+1][j-1]==1)
            {
                dp[i][j]=1;
                if(k>maxlen)
                {
                    s=i;
                    maxlen=k;
                }
            }
        }
    }
    for(i=0;i<n+1;i++)
    {
        for(j=0;j<n+1;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    cout<<s<<maxlen<<endl;
    cout<<str.substr(s,maxlen)<<endl;
    return 0;
}