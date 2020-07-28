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
        int max_index=0;
        int max=a[0];
        set<int> s;
        for(i=1;i<n;i++)
        {
            if(a[i]>=max)
            {
                max=a[i];
                max_index=i;
            }
        }
        int f=0;
        for(i=max_index;i<n;i++)
        {
            f=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                s.insert(a[i]);
        }
        set<int>::reverse_iterator it;
        for(it=s.rbegin();it!=s.rend();it++)
            cout<<(*it)<<" "; 
        cout<<"\n";
        int count=0;
        for(i=0;i<n;i++)
            if(a[i]==max)
                count++;
        if(count==1)
            cout<<max<<"\n";
        else
            cout<<"-1\n";
    }
}