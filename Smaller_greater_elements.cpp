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
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        for(auto x=s.begin();x!=s.end();++x)
            cout<<(*x)<<"\n";
        for(int i=0;i<n;i++)
        {
            auto it=s.find(a[i]);
            ++it;
            if(it!=s.end())
                cout<<(*it)<<" ";
            else
                cout<<"_"<<" ";
        }
        cout<<endl;

    }
    return 0;
}