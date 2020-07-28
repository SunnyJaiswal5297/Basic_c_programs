#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        //swapping
        for(i=0;i<n-2;i++)
        {
            int temp=a[i];
            a[i]=a[i+2];
            a[i+2]=temp;
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}