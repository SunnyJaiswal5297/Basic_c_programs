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
            b[i]=1;
        }
        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                b[i]=b[i-1]+1;
        }
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        for(i=n-2;i>=0;i--)
        {
            if(a[i]>a[i+1] && !(b[i]>b[i+1]))
            {
                b[i]=b[i+1]+1;
            }
        }
        int sum=0;
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
            sum+=b[i];
        }
        cout<<sum<<endl;
    }
}