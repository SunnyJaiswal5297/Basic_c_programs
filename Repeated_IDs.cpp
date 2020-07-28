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
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(m[a[i]]>1)
            {
                cout<<a[i]<<" ";
                m[a[i]]=0;
            }
            else if(m[a[i]])
                cout<<a[i]<<" ";
        }
    }
    return 0;
}