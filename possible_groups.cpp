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
            ump[a[i]%3]++;
        }
        for(auto x:ump)
            cout<<x.first<<" "<<x.second<<endl;
        //groups of 2: 2 possibilities
        int sum=0;
        //remainder with zero
        sum+=ump[0]*(ump[0]-1)/2;
        //remainder with 1 and 2
        sum+=(ump[2]+ump[1])*(ump[2]+ump[1]-1)/2;
        cout<<sum<<endl;
        //groups of 3
        if(ump[0]>=3)
            sum+=ump[0]*(ump[0]-1)*(ump[0]-2)/6;
        if(ump[1]>=3)
            sum+=ump[1]*(ump[1]-1)*(ump[1]-2)/6;
        if(ump[2]>=3)
            sum+=ump[2]*(ump[2]-1)*(ump[2]-2)/6;
        sum+=ump[0]*ump[1]*ump[2];
        cout<<sum<<endl;

    }
    return 0;
}