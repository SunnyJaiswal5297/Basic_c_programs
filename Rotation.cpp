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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int f=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<i+1;
        else
            cout<<"0\n";
    }
    return 0;
}