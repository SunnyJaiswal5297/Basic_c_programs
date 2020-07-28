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
        int in=a[0];
        int out=0;
        for(i=1;i<n;i++)
        {
            int temp=in;
            in=max(out+a[i],in);
            out=temp;
        }
        cout<<in<<"\n";
    }
    return 0;
}