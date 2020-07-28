#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            if((a[i]+a[i+1])%4==0)
                count++;
        }
        cout<<count;
    }
    return 0;
}