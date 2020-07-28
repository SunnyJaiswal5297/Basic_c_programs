#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int add[n],sub[n];
        for(i=0;i<n;i++)
            add[i]=a[i]+i;
        for(i=0;i<n;i++)
            sub[i]=a[i]-i;
        int max1=INT_MIN,min1=INT_MAX,max2=INT_MIN,min2=INT_MAX;
        for(i=0;i<n;i++)
        {
            max1=max(max1,add[i]);
            min1=min(min1,add[i]);
            max2=max(max2,sub[i]);
            min2=min(min2,sub[i]);
        }
        cout<<max(max1-min1,max2-min2)<<endl;
    }
    return 0;
}