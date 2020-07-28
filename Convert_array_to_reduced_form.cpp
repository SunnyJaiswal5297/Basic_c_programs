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
        int a[n],b[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            m[a[i]]=i;
        }
        for(i=0;i<n;i++)
        {
            cout<<m[b[i]]<<" ";
        }
    }
}