#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=0;
        }
        int k=0;
        for(i=0;i<n;i++)
        {
            if(a[i])
                b[k++]=a[i];
        }
        for(i=k;i<n;i++)
            b[i]=0;
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
    }
    return 0;
}