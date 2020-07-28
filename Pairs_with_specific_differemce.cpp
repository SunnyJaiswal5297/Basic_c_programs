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
        sort(a,a+n);
        i=n-1;
        int sum=0;
        while(i>0)
        {
            if((a[i]-a[i-1])>=k)
                i--;
            else if((a[i]-a[i-1])<k)
            {
                sum+=a[i]+a[i-1];
                i-=2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}