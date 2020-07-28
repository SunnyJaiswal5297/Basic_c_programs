#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int total=0;
        int left[n],right[n];
        left[0]=a[0];
        for(i=1;i<n;i++)
            left[i]=max(left[i-1],a[i]);
        right[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
            right[i]=max(right[i+1],a[i]);
        for(i=0;i<n;i++)
            cout<<left[i]<<" ";
        for(i=0;i<n;i++)
            cout<<right[i]<<" ";
        for(i=0;i<n;i++)
        {
            total+=min(left[i],right[i])-a[i];
        }
        if(total>0)
            cout<<total<<"\n";
        else
            cout<<"0\n";
    }
    return 0;
}