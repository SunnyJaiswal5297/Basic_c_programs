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
        map<int,int> mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]=i;
        }
        int left_min[n],right_max[n];
        letf[0]=-1;
        right_max[n-1]=-1;
        auto it=mp.begin();
        for(i=1;i<n;i++)
        {
            if(mp[a[i]]>)
        }
    }
    return 0;
}