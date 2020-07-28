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
        int a[n],i,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int a1=a[0];
        int l=a[n-1];
        int d=(l-a1)/n;
        int real_sum=((n+1)*(a1+l))/2;
        cout<<real_sum-sum<<"\n";
    }
    return 0;
}