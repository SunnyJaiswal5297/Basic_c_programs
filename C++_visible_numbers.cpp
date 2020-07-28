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
        for(auto x:m)
        {
            if(x.second>n/3)
                cout<<x.first<<" ";
        }
        cout<<endl;
    }
    return 0;
}
