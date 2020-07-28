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
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
            cin>>b[i];
        int left=0,right=n-1,mid,index=n;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(a[mid]==b[mid])
            {
                left=mid+1;
            }
            else
            {
                index=mid;
                right=mid-1;
            }
        }
        cout<<index<<"\n";      
    }
    return 0;
}