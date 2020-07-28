#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long p1=a[0]*a[1]*a[n-1];
        long long p2=a[n-1]*a[n-2]*a[n-3];
        long long p3=a[0]*a[1]*a[2];
        if(p1>p2 && p1>p3)
            cout<<p1<<"\n";
        else if(p2>p1 && p2>p3)
            cout<<p2<<"\n";
        else
            cout<<p3<<"\n";
    }
    return 0;
}