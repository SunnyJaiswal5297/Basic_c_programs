#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int n1=2*n+2;
        int a[n1],i;
        for(i=0;i<n1;i++)
            cin>>a[i];
        map<int,int> m;
        for(i=0;i<n1;i++)
            m[a[i]]++;
        int s=m.size();
        cout<<s<<"\n";
        for(auto x:m)
        {
            if((x.second%2)!=0)
                cout<<x.first<<" ";
        }
    }
    return 0;
}