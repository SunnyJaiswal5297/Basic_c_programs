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
        {
            cin>>a[i];
            if(a[i]<0)
                a[i]=abs(a[i]);
        }
        unordered_set<int> s;
        int res=0;
        for(int i=0;i<n;i++)
        {
            if(s.find(a[i])==s.end())
            {
                s.insert(a[i]);
                res++;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}