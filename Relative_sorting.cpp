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
        map<int,int> mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(i=0;i<m;i++)
            cin>>b[i];
        vector<int> vec;
        for(i=0;i<m;i++)
        {
            if(mp.find(b[i])!=mp.end())
            {
                while(mp[b[i]]--)
                    vec.push_back(b[i]);
                mp.erase(b[i]);
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            while(it->second--)
                vec.push_back(it->first);
        }
        for(auto it=vec.begin();it!=vec.end();++it)
            cout<<(*it)<<" ";
    }
	return 0;
}