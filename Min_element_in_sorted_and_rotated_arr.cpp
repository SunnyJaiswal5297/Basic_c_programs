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
        int mid,left=0,right=n-1;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(mid==0)
            {
                cout<<a[mid]<<"\n";
                break;
            }
            if(a[mid]<a[mid-1] && a[mid]<a[mid+1])
            {
                cout<<a[mid]<<"\n";
                break;
            }
            else if(a[mid]>a[mid+1])
            {
                cout<<a[mid+1]<<"\n";
                break;
            }
            else if(a[mid]>a[right])
                left=mid+1;
            else
                right=mid-1;
        }
    }
    return 0;
}