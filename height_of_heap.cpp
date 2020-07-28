#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    int count=0;
	    while(n/2>0)
	    {
	        count++;
	        n=n/2;
	    }
	    cout<<count<<endl;
    }
	return 0;
}