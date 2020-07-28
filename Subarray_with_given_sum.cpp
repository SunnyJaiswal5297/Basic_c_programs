// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int subArraySum(int arr[], int n, int sum);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    cout<<subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}// } Driver Code Ends

int subArraySum(int a[], int n, int sum)
{
    int i,s=0,c=0;
    unordered_map<int,int> ump;
    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(s==sum)
            c++;
        if(ump.find(s-sum)!=ump.end())
            c+=ump.find(s-sum)->second;
        ump[s]++;
    }
    return c;
}