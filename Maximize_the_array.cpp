#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
	return a>b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],c[2*n],i,k=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			c[k++]=a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			c[k++]=b[i];
		}
		sort(c,c+2*n,compare);
		k=0;
		unordered_set<int> m;
		while(m.size()!=n)
		{
			if(m.find(c[k])==m.end())
				m.insert(c[k]);
			k++;
		}
		for(i=0;i<n;i++)
		{
			if(m.find(b[i])!=m.end())
				cout<<b[i]<<" ";
			m.erase(b[i]);
		}
		for(i=0;i<n;i++)
		{
			if(m.find(a[i])!=m.end())
				cout<<a[i]<<" ";
			m.erase(a[i]);
		}
		cout<<endl;
	}
	return 0;
}