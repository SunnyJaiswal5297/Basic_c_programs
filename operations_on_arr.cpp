#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	ll n,x,q;
	cin>>n>>x;
	int a[n+1],b[n+1],i,c=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==x)
			c++;
		b[i]=c;
	}
	cin>>q;
	while(q--)
	{
		int type;
		cin>>type;
		if(type==1)
		{
			int l,r,k,i;
			bool flag=false;
			cin>>l>>r>>k;
			if(l==1)
			{
				if(b[r]>0)
				{
					while(b[r]>k && r>=l)
						r--;
					if(b[r]==k)
						cout<<r<<endl;
				}
				else
					cout<<"-1"<<endl;
			}
			else if(b[r]-b[l-1]>0)
			{
				if(b[r]-b[l-1]>k)
				{
					while(b[r]-b[l-1]!=k && r>=l)
						r--;
					if(b[r]-b[l-1]==k)
						cout<<r<<endl;
				}
				else if(b[r]-b[l-1]==k)
					cout<<l<<endl;
				else
					cout<<"-1"<<endl;
			}
			else
				cout<<"-1"<<endl;
		}
		else
		{
			int index,val;
			cin>>index>>val;
			a[index]=val;
		}
	}
	return 0;
}