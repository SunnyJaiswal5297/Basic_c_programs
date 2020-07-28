#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        unordered_map<int,int> ump;
        for(i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(a[i]-a[j])==k)
                {
                    if(a[i]<=a[j])
                        ump[a[i]]=a[j];
                    else
                        ump[a[j]]=a[i];
                }
            }
        }
        for(auto x:ump)
            cout<<x.first<<" "<<x.second<<endl;
    }
}