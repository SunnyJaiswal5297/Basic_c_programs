// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 
int ValidPair(int* array, int n) ;

int ValidPair(int* a, int n) 
{ 
    // code here 
    sort(a,a+n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
            continue;
        int j=lower_bound(a,a+n,-a[i]+1)-a;
        count+=i-j;
    }
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
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
		cout<<ValidPair(array,n)<<endl;
	}
	return 0; 
} 