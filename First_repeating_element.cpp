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
        int b[100000]={0};
        for(i=0;i<n;i++)
            b[a[i]]++;
        vector <int> v;
        for(i=0;i<=100000;i++)
        {
            if(b[i]>1)
                v.push_back(i);
        }
        int f=0;
        for(i=0;i<n;i++)
        {
            int temp=a[i];
            vector<int>:: iterator it=find(v.begin(),v.end(),a[i]);
            if(it!=v.end())
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<i+1<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}