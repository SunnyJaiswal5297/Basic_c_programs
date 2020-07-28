#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin>>n;
        int a[n],i;
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]=i;
        }
        map<int,int>::iterator it1,it2;
        it1=m.begin();
        it2=m.end()-1;
        while(it2>it1)
        {
            if(it1)
        }
    }
    return 0;
}