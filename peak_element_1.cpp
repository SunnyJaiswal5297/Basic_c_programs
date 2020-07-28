// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
int peakElement(int a[], int n)
{
    int f=0;
    int l=0,r=n-1;
    if(n==1)
        return 0;
    else
    {
        while(l<r)
        {
            int mid=(l+r)/2;
            if(mid==0 && mid==n-1)
                return mid;
            else if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            {
                f=1;
                return mid;
            }
            else if(a[mid]>a[mid-1])
                l=mid+1;
            else
                r=mid-1;
        }
    }
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}

	return 0;
}  // } Driver Code Ends