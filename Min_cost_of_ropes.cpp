#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        ll int n;
        cin>>n;
        ll a[n],i;
        priority_queue<ll int,vector<ll int>,greater<ll int>> pq;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            pq.push(a[i]);
        }
        ll int cost=0;
        if(n==1)
            cout<<a[0];
        else
        {
            while(pq.size()>1)
            {
                int a=pq.top();
                //cout<<a<<" ";
                pq.pop();
                int b=pq.top();
                //cout<<b<<" ";
                pq.pop();
                int sum=a+b;
                cost+=sum;
                //cout<<sum<<endl;
                pq.push(sum);
            }
            //cout<<pq.top()<<endl;
            cout<<cost<<endl;
        }
    }
	return 0;
}