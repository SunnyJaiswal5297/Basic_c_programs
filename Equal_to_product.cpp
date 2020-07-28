#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        uint64_t n,k;
        cin>>n>>k;
        uint64_t a[n],i,b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0;
        sort(a,a+n);
        uint64_t l=0,r=n-1;
        while(l<r)
        {
            if(a[l]*a[r]==k)
            {
                f=1;
                break;
            }
            else if(a[l]*a[r]<k)
                ++l;
            else
                --r;
        }
        if(f==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}