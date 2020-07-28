#include<iostream>
using namespace std;

int peak_element(int arr[],int n)
{
    int index;
    int mid,left=0,right=n-1,f=0;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(mid==0 && mid==n-1)
        {
            f=1;
            return 1;
        }
        else if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
        {
            f=1;
            return 1;
        }
    }
    if(f==0)
        return 0;
}
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
        cout<<peak_element(a,n)<<"\n";
    }
    return 0;
}