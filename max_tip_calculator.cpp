#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b)
{
    return (fabs(a.first-a.second)>fabs(b.first-b.second));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,i,total=0;
        cin>>n>>x>>y;
        vector<pair<int,int>> vp(n);
        for(i=0;i<n;i++)
            cin>>vp[i].first;
        for(i=0;i<n;i++)
            cin>>vp[i].second;
        sort(vp.begin(),vp.end(),comp);
        for(i=0;i<n;i++)
        {
            if(x>0 && (vp[i].first>=vp[i].second || y==0))
            {
                total+=vp[i].first;
                x--;
            }
            else if(y>0 && (vp[i].first<=vp[i].second || x==0))
            {
                total+=vp[i].second;
                y--;
            }
        }
        cout<<total<<"\n";
    }
}