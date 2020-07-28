#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int a[n],i,m=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m=max(m,a[i]);
        }
        cin>>k;
        unordered_map<int,int> ump;
        for(i=0;i<n;i++)
            ump[a[i]]++;
        int count=0;
        if(k==0)
        {
            for(auto x:ump)
            {
                if(x.second>1)
                    count++;
            }
        }
        else
        {
            for(auto x:ump)
            {
                if(x.second>0)
                {
                    if(ump.find(x.first+k)!=ump.end())
                    {
                        count++;
                        auto itr=ump.find(x.first+k);
                        x.second=0;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
}