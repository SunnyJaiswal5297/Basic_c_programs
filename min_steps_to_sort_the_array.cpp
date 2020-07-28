//n-LIS

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll a[n],b[n],c[n],i,j,m1=1,m2=1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=1;
        c[i]=1;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j])
				b[i]=max(b[i],b[j]+1);
            if(a[i]<a[j])
                c[i]=max(c[i],c[j]+1);
		}
	}
	for(i=0;i<n;i++)
    {
		m1=max(m1,b[i]);
        m2=max(m2,c[i]);
    }
	cout<<min(n-m1,n-m2)<<endl;
	return 0;
}