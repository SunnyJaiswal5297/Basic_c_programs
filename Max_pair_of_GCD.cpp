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
        int max=0;
        for(i=0;i<n;i++)
            if(a[i]>max)
                max=a[i];
        int count[max+1]={0};
        for(i=0;i<n;i++)
        {
            for(j=1;j<=sqrt(a[i]);j++)
            {
                if(a[i]%j==0)
                    count[j]++;
                if(j!=a[i]/j)
                    count[a[i]/j]++;
            }
        }
        for(i=max;i>=1;i--)
            if(count[i]>1)
            {
                cout<<i<<"\n";
                break;
            }
            
    }
    return 0;
}