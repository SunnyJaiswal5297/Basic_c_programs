#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int r=k%n;
        for(i=0;i<n;i++)
            cout<<(a[(r+i)%n])<<" ";
        cout<<"\n";
    }
    return 0;
}