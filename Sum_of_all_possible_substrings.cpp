#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int n=str.length();
	    long long dp[n];
        for(long long i=0;i<n;i++)
        { 
          dp[i]=str[i]-'0';
        }
        for(long long i=1;i<n;i++)
        {
          long long num=0;
          for(long long j=0;j<i;j++)
          { 
            long long temp =stoll(str.substr(j,i-j+1));  
            num+=temp;
          }
         dp[i]=dp[i]+dp[i-1]+num;
        }
        cout<<dp[n-1]<<endl;
	}
	return 0;
}