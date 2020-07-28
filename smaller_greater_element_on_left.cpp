#include<bits/stdc++.h>
using namespace std;

int main() 
{
    set<int>s;
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s.clear();
        for(int i=0;i<n;i++)
        {
            cin>>x;
            auto itr=s.insert(x);
            auto it=itr.first;
            if(it==s.begin())
                cout<<"-1 ";
            else
                cout<<*(--it)<<" ";
        }
        cout<<endl;
    }
	return 0;
}