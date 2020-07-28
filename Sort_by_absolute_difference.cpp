#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],i,j;
        vector<pair<int,int>> vec;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            vec.push_back(make_pair(abs(a[i]-k),i));
        }
        sort(vec.begin(),vec.end());
        for(i=0;i<n;i++)
            cout<<a[vec[i].second]<<" ";
        cout<<endl;
    }
    return 0;
}