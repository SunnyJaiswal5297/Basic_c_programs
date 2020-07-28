#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,p;
        cin>>n>>m>>p;
        int a[n],b[m],c[p],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];
        for(i=0;i<p;i++)
            cin>>c[i];
        int j=0,k=0;
        i=0;
        set<int> s;
        while(i<n && j<m && k<p)
        {
            if(a[i]==b[j] && b[j]==c[k])
            {
                s.insert(a[i]);
                i++;j++;k++;
            }
            else if(a[i]<b[j])
                i++;
            else if(b[j]<c[k])
                j++;
            else
                k++;
        }
        for(auto x:s)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
