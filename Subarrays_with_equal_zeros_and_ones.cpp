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
        for(i=0;i<n;i++)
            cin>>a[i];
        unordered_map<int,int> ump;
        int count=0,curr_sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                curr_sum+=-1;
            else
                curr_sum+=a[i];
            ump[curr_sum]++;
        }
        for(auto x:ump)
        {
            count+=(x.second*(x.second-1))/2;
        }
        count+=ump[0];
        cout<<count<<endl;
    }
    return 0;
}