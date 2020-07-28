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
        int sum;
        cin>>sum;
        int l=0,r=n-1,f=0;
        while(l<r)
        {
            if(a[l]+a[r]==sum)
            {
                f=1;
                cout<<a[l]<<" "<<a[r]<<" "<<sum<<"\n";
                l++;
                r--;
            }
            else if(a[l]+a[r]>sum)
                r--;
            else
                l++;
        }
        if(f==0)
            cout<<"-1";
        cout<<endl;
    }
}