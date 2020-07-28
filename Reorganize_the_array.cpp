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
        int a[n],i,b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=-1;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
                b[a[i]]=a[i];
        }
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
    }
}