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
        stack<int> s;
        s.push(n-1);
        int res[n];
        res[n-1]=-1;
        for(i=n-2;i>=0;i--)
        {
            while(!s.empty() && a[s.top()]<a[i])
                s.pop();
            if(s.empty())
                res[i]=-1;
            else
                res[i]=a[s.top()];
            s.push(i);
        }
        for(i=0;i<n;i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
	return 0;
}