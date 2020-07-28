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
        int s=0,m=1,e=2,initial_check=0,f=0;
        int max=a[s]*a[m]*a[e];
        set<int> s_map;
        s_map.insert(s);
        s_map.insert(m);
        s_map.insert(e);
        auto min_ele=s_map.begin();
        if(a[s]<a[m] && a[m]<a[e])
            initial_check=1;
        for(i=3;i<n;i++)
        {
            if((max/a[*min_ele])*a[i]>max)
            {
                f=1;
                max=max/a[*min_ele]*a[i];
                s_map.erase(min_ele);
                s_map.insert(i);
                min_ele=s_map.begin();
            }
        }
        if(f==1)
        {
            for(auto x:s_map)
                cout<<a[x]<<" ";
        }
        else
        {
            if(initial_check==0 && f==0)
                cout<<"Not present";
        }
        cout<<endl;
    }
    return 0;
}