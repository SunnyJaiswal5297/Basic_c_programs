#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
int bracket[1001][1001];
void parenthesis(int i,int j,int n,char &ch)
{
    if(i>=j)
    {
        cout<<ch++<<" ";
        return ;
    }
    cout<<"(";
    parenthesis(i,bracket[i][j],n,ch);
    parenthesis(bracket[i][j]+1,j,n,ch);
    cout<<")";
}
int solve_MCM(int a[],int i,int j)
{
    if(i>=j)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int ans=INT_MAX;
    for(int k=i;k<j;k++)
    {
        int temp=solve_MCM(a,i,k) + solve_MCM(a,k+1,j) + a[i-1]*a[k]*a[j];
        if(temp<ans)
        {
            ans=temp;
            bracket[i][j]=k;
        }
    }
    return dp[i][j]=ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        memset(dp,-1,sizeof(dp));
        memset(dp,-1,sizeof(bracket));
        int res=solve_MCM(a,1,n-1);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<bracket[i][j]<<" ";
            cout<<endl;
        }
        cout<<res<<endl;
        char ch='A';
        parenthesis(1,n-1,n,ch);
        cout<<endl;
    }
    return 0;
}