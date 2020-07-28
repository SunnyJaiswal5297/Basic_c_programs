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
        int freq[1000001]={0};
        for(i=0;i<n;i++)
            freq[a[i]]++;
        int max=a[0],min_freq=freq[a[0]];
        for(i=1;i<n;i++)
        {
            if(a[i]>max && freq[a[i]]<=min_freq)
            {
                max=a[i];
                min_freq=freq[a[i]];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}