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
        int a[n],b[m],i;
        unordered_set<long long> s;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            s.insert(b[i]);
        }
        for(i=0;i<n;i++)
        {
            if(s.find(a[i])==s.end())
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}