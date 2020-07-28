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
        unordered_map<int,int> ump;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ump[a[i]]++;
        }
        vector<int> vec;
        for(auto x:ump)
            vec.push_back(x.second);
        sort(vec.begin(),vec.end());
        cout<<vec[vec.size()-1]-vec[0]<<endl;
    }
}