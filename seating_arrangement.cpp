#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[n],i;
	//enter preferred seats
	for(i=0;i<n;i++)
		cin>>a[i];
	int b[m+1],count=0;
	for(i=1;i<=m;i++)
        b[i]=k;
	for(i=0;i<n;i++)
	{
		if(b[a[i]]>0)
			b[a[i]]--;
		else
			count++;
	}
	cout<<count<<endl;
	return 0;
}