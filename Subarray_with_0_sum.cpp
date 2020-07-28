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
        int a[n],i,curr_sum=0,count=0,sum=0;
        unordered_map<int,int> ump;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            curr_sum+=a[i];
            if(curr_sum==0)
            {
                count++;
                break;
            }
            ump[curr_sum]++;
            if(ump[curr_sum]>1)
            {
                count++;
                break;
            }
        }
        if(count>0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}