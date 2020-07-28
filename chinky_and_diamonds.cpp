#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,m;
        cin>>n>>m;
        int a[n],i;
        priority_queue<int> pq;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            pq.push(a[i]);
        }
        int sum=0;
        for(i=0;i<m;i++)
        {
            int ele=pq.top();
            pq.pop();
            sum+=ele;
            ele=floor(float(ele)/2);
            pq.push(ele);
        }
        cout<<sum<<endl;
    }
	return 0;
}