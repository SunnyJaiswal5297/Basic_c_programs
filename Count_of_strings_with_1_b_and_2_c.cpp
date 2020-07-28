#include<bits/stdc++.h>
using namespace std;
int dp[1001][2][3];
int solve(int n,int b_count,int c_count)
{
    //base cases
    if(b_count<0 || c_count<0)
        return 0;
    if(n==0)
        return 1;
    if(b_count == 0 && c_count==0)
        return 1;
    if(dp[n][b_count][c_count]!=-1)
        return dp[n][b_count][c_count];
    int res=solve(n-1,b_count,c_count);
    //cout<<res<<" "<<n<<" "<<" "<<b_count<<" "<<c_count<<endl;
    res+=solve(n-1,b_count-1,c_count);
    //cout<<res<<" "<<n<<" "<<" "<<b_count<<" "<<c_count<<endl;
    res+=solve(n-1,b_count,c_count-1);
    //cout<<res<<" "<<n<<" "<<" "<<b_count<<" "<<c_count<<endl;
    return dp[n][b_count][c_count]=res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        memset(dp,-1,sizeof(dp));
        cout<<solve(n,1,2)<<endl;
    }
	return 0;
}

//direct formula : 1+2*n+n(n-1)(n+1)/2