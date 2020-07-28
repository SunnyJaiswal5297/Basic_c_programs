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
        int a[n],i,k,l,x,f=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>x;
        //first occurence
        for(i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                f=1;
                k=i;
                break;
            }
        }
        //last occurence
        for(i=n-1;i>=0;i--)
        {
            if(a[i]==x)
            {
                f=1;
                l=i;
                break;
            }
        }
        if(f==0)
            cout<<"-1\n";
        else
            cout<<k<<" "<<l<<"\n";
    }
    return 0;
}