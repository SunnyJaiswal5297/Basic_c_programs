#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x,f=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>x;
        for(i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<i<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}