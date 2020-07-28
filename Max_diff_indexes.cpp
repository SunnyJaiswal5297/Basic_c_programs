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
        int arr[n],i;
        for(i=0;i<n;i++)
            cin>>arr[i];
        map<int,vector<int>> vmp;
        for(i=0;i<n;i++)
            vmp[arr[i]].push_back(i);
        int max=0;
        for(auto x:vmp)
        {
            auto idx=x.second;
            int last=idx[idx.size()-1];
            int first=idx[0];
            if(last-first>max)
                max=last-first;
        }
        cout<<max<<endl;
    }
    return 0;
}