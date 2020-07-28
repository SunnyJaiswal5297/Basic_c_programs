#include<bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThanK(long long int a[],long long n,long long k) 
{ 	 
	long long p = 1; 
	int res = 0; 
	for (int start = 0, end = 0; end < n; end++) 
    {  
		p *= a[end]; 
		while (start < end && p >= k) 
			p /= a[start++];		  
		if (p < k) { 
			int len = end-start+1; 
			res += len; 
		} 
	} 
	return res; 
} 
int main() 
{ 
	int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<countSubArrayProductLessThanK(a,n,k)<<endl;
    }
    return 0;
} 
