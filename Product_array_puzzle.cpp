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
        int product=1;
        for(i=0;i<n;i++)
            product*=a[i];
        for(i=0;i<n;i++)
            cout<<product/a[i]<<" ";
        cout<<endl;
    }
}