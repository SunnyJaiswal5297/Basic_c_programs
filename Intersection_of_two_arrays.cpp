// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
int NumberofElementsInIntersection (int a[], int b[], int n, int m );


 // } Driver Code Ends
//User function template for C++

// Given two arrays A and B and their sizes N and M respectively 
int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    int l=0,r=0;
    sort(a,a+n);
    sort(b,b+m);
    int count=0;
    map<int,int> mp;
    mp.size();
    while(l < n && r < m)
    {
        if(a[l]==b[r])
        {
            count++;
            if(l<n)
                l++;
            if(r<m)
                r++;
        }
        else
        {
            if(a[l]>b[r])
            {
                if(r==m-1 && l<n)
                    l++;
                else
                    r++;
            }
            else
            {   
                if(l==n-1 && r<m)
                    r++;
                else
                    l++;
            }
        }
    }
    return count;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
			
		cout << NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
}  // } Driver Code Ends