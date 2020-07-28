#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,k,i,j=0;
        cin>>m>>n>>k;
        int a[m],b[n],c[m+n];
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            c[m+i]=b[i];
        }
        sort(c,c+(m+n));
        cout<<c[k-1]<<"\n";
    }
}