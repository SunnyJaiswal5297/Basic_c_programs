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
        int b[n],c[n];
        for(i=0;i<n;i++)
            b[i]=c[i]=1;
        int flag=0;j=0;
        for(i=1;i<n;i++)
        {
            if(flag==0 && a[i]>a[i-1] && 1+b[j]>b[i])
            {
                b[i]=1+b[j];
                flag=1;
                j=i;
            }
            else if(flag==1 && a[i]<a[i-1] && 1+b[j]>b[i])
            {
                b[i]=1+b[j];
                flag=0;
                j=i;
            }
        }
        flag=1;
        for(i=1;i<n;i++)
        {
            if(flag==0 && a[i]>a[i-1] && 1+c[j]>c[i])
            {
                c[i]=1+c[j];
                flag=1;
                j=i;
            }
            else if(flag==1 && a[i]<a[i-1] && 1+c[j]>c[i])
            {
                c[i]=1+c[j];
                flag=0;
                j=i;
            }
        }
        int maxlen=0;
        for(i=0;i<n;i++)
        {
            //cout<<b[i]<<" "<<c[i]<<endl;
            maxlen=max(maxlen,max(b[i],c[i]));
        }
        cout<<maxlen<<endl;
    }
    return 0;
}
