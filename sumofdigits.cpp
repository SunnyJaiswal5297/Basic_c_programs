#include <iostream>
#include<algorithm>
#define ll long long int
using namespace std;

int sumofdigits(ll n)
{
	if(n==0)
		return 0;
	return (n%9==0)?9:(n%9);
}

int main() 
{

    int n,q;
    cin>>n>>q;
    ll a[n],b[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=sumofdigits(a[i]);
    }
    sort(b,b+n);
    ll leftsum[n],rightsum[n],sum=0;
    for(i=0;i<n;i++)
    {
        sum+=b[i];
        leftsum[i]=sum;
    }
    sum=0;
    for(i=n-1;i>=0;i--)
    {
        sum+=b[i];
        rightsum[i]=sum;
    }
    while(q--)
    {
        int type,k;
        ll count=0;
        cin>>type>>k;
        if(type==1)
        {
            //maximum from k;
            count=rightsum[n-k];
        }
        else
        {
            count+=leftsum[k-1];
        }
        cout<<count<<endl;
    }
	return 0;
}