#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        int f=0;
        for(i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                if(a[i]+a[l]+a[r]==x)
                {
                    f=1;
                    break;
                }
                else if(a[i]+a[l]+a[r]<x)
                    l++;
                else
                    r--;
            }
            if(f==1)
                break;
        }
        if(f==1)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
}