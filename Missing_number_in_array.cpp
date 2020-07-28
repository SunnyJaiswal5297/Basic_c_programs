#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0;
        cin>>n;
        int a[n-1];
        for(i=0;i<n-1;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cout<<(n*(n+1)/2)-sum;
    }
    return 0;
}