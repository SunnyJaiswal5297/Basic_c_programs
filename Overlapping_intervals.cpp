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
        pair<int,int> p[n];
        for(auto &x:p)
            cin>>x.first>>x.second;
        sort(p,p+n);
        vector<pair<int,int>> vp;
        vp.push_back(p[0]);
        for(int i=1;i<n;i++)
        {
            if(vp.back().second>=p[i].second)
                vp.back().second=max(vp.back().second,p[i].second);
            else
            {
                if(vp.back().second>=p[i].first)
                {
                    vp.back().second=p[i].second;
                }
                else
                {
                    vp.push_back(p[i]);
                }
            }
        }
        for(auto x:vp)
            cout<<x.first<<" "<<x.second<<endl;
    }
	return 0;
}