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
            mp[a[i]]++;
        }
        int max=-1,count=0;
        for(auto x:mp)
        {
            if(x.second>=4 && x.first>max)
            {
                max=x.first;
                count=x.second;
            }
        }
        if(max>-1)
            cout<<(max*max)<<" "<<(count/4)<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}