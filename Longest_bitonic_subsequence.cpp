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
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int LIS[n],LDS[n];
        for(i=0;i<n;i++)
        {
            LIS[i]=1;
            LDS[i]=1;
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[j]<a[i] && LIS[j]+1>LIS[i])
                    LIS[i]=LIS[j]+1;
            }
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=n-1;j>i;j--)
            {
                if(a[j]<a[i] && LDS[j]+1>LDS[i])
                    LDS[i]=LDS[j]+1;
            }
        }
        int maxval=1;
        for(i=0;i<n;i++)
            maxval=max(maxval,LIS[i]+LDS[i]-1);
        cout<<maxval<<endl;
    }
    return 0;
}