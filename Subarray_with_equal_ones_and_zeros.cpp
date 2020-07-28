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
            int x;
            cin>>x;
            if(x==0)
                a[i]=-1;
            else
                a[i]=x;
        }
        int curr_sum=0,max_len=0,sum=0;
        for(i=0;i<n;i++)
        {
            curr_sum+=a[i];
            if(curr_sum==0)
                max_len=max(max_len,i+1);
            if(ump.find(curr_sum-sum)!=ump.end())
            {
                max_len=max(max_len,i-ump[curr_sum-sum]);
            }
            else
                ump[curr_sum]=i;
        }
        cout<<max_len<<endl;
    }
    return 0;
}