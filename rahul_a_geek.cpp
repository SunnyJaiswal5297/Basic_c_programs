#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,num,i;
        cin>>n;
        vector<int> v;
        for(i=0;i<n;i++)
        {
            cin>>num;
            v.push_back(num);
        }
        int cost;
        auto it=min_element(v.begin(),v.end());
        cost=(*it)*(n-1);
        cout<<cost<<"\n";
    }
    return 0;
}