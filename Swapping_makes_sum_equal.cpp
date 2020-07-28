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
        int a[n];
        unordered_set<int> b;
        int i,s1=0,s2=0,x;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s1+=a[i];
        }
        for(i=0;i<m;i++)
        {
           cin>>x;
           b.insert(x);
           s2+=x;
        }
        int diff=abs(s1-s2),f=0;
        for(i=0;i<m;i++)
        {
            if(b.find(abs(diff-a[i]))!=b.end())
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<f<<endl;
        else
            cout<<"-1\n";
    }
}