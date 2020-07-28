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
        int f=0;
        unordered_map<int,int> m;
        for(i=0;i<n;i++)
            m[a[i]]++;
        for(i=0;i<n;i++)
        {
            if(m[a[i]]==1)
            {
                f=1;
                cout<<a[i]<<"\n";
                break;
            }
        }
        if(f==0)
            cout<<"0\n";
    }
}