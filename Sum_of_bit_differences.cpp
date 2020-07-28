// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long sumBitDiff(int arr[], int n) ;
  
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	int n,i;
    	cin>>n;
    	int arr[n];
    	for(i=0;i<n;i++)
    		cin>>arr[i];
		cout<<sumBitDiff(arr,n)<<endl;
    }
	return 0; 
}
// } Driver Code Ends

long long sumBitDiff(int a[], int n) 
{ 
    //code here.
    long long int ans=0;
    for(int i=0;i<32;i++)
    {
        long long int c=0;
        for(int j=0;j<n;j++)
        {
            if((a[j] & (1<<i)))
                c++;
        }
        ans+=c*(n-c)*2;
    }
    return ans;
} 
  