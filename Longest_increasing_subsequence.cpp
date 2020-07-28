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
        int b[n];
        for(i=0;i<n;i++)
            b[i]=1;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j])
                {
                    b[i]=max(b[i],b[j]+1);
                }
            }
        }
        int max=1;
        for(i=0;i<n;i++)
        {
            if(b[i]>max)
                max=b[i];
        }
        cout<<max<<endl;
    }
    return 0;
}
