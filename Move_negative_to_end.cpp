#include<iostream> 
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],i,k=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
                b[k++]=a[i];
        }
        for(i=0;i<n;i++)
            if(a[i]<0)
                b[k++]=a[i];
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
}