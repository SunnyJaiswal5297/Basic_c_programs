#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,sum[n],curr_sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                sum[i]=-1;
            }
            else
            {
                curr_sum+=a[i];
                sum[i]=curr_sum;
            }
        }
        int max_index=0,max=a[0];
        for(i=1;i<n;i++)
            if(a[i]>max)
            {
                max=a[i];
                max_index=i;
            }
        int start=max_index;
        while(start>=0 && sum[start]>=0)
            start--;
        for(i=start+1;i<=max_index;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}