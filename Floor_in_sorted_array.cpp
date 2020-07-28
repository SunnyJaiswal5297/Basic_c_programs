#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n,x,f=0;
        cin>>n>>x;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];  //sorted array
        for(i=0;i<n;i++)
        {
            if(a[0]>x)
            {
                f=1;
                cout<<"-1\n";
                break;
            }
            else if(a[i]>x)
            {
                f=1;
                cout<<i--<<"\n";
                break;
            }
        }
        if(f==0)
            cout<<n-1<<"\n";
    }
    return 0;
}