#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[k],i;
        for(i=1;i<=n;i++)
            a[i]=0;
        for(i=0;i<k;i++)
            cin>>b[i];
        int j=0;
        for(i=0;i<k;i++)
        {
            if(a[b[i]]==0)
            {
                for(j=b[i];j<=n;j=j+b[i])
                    a[j]=1;
            }
        }
        int count=0;
        for(i=1;i<=n;i++)
            if(a[i]==0)
                count++;
        cout<<count<<endl;
    }
    return 0;
}