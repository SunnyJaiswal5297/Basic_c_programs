#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,i;
        cin>>n;
        int x,y;
        vector<pair<int,int>> m;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            m.push_back(make_pair(x+y,i+1));
        }
        sort(m.begin(),m.end());
        for(auto it=m.begin();it!=m.end();++it)
            cout<<it->second<<endl;
        
    }
	return 0;
}