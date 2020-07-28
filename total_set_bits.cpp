// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int dp[n+1],i,count=0;
    dp[0]=0;dp[1]=1;
    for(i=2;i<=n;i++)
        dp[i]=dp[i%2]+dp[i/2];
    for(i=0;i<=n;i++)
        count+=dp[i];
    return count;
}

int main()
{
	 int t;
	 cin>>t;
	 while(t--)
	 {
	       int n;
	       cin>>n;
	       cout << countSetBits(n) << endl;
	  }
	  return 0;
}