#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
bool isPalindrome(string str,int i,int j)
{
    while(i<j)
    {
        if(str[i]!=str[j])
            return false;
        i++;j--;
    }
    return true;
}
int solve_MCM(string str,int i,int j)
{
    if(i>=j || isPalindrome(str,i,j))
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int ans=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int left,right;
        if(dp[i][k]!=-1)
            left=dp[i][k];
        else
        {
            left=solve_MCM(str,i,k);
            dp[i][k]=left;
        }
        if(dp[k+1][j]!=-1)
            right=dp[k+1][j];
        else
        {
            right=solve_MCM(str,k+1,j);
            dp[k+1][j]=right;
        }
        int temp=1+left+right;
        ans=min(ans,temp);
    }
    return dp[i][j]=ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        memset(dp,-1,sizeof(dp));
        int res=solve_MCM(str,0,str.length()-1);
        
        for(int i=0;i<str.length();i++)
        {
            for(int j=0;j<str.length();j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        cout<<res<<endl;
    }
    return 0;
}