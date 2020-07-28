#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,i,f=0;
        cin>>n;
        int a[n],left[n],right[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int sum=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
                left[i]=0;
            else
            {
                left[i]=a[i-1]+sum;
                sum=left[i];
            }
        }
        sum=0;
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1)
                right[i]=0;
            else
            {
                right[i]=a[i+1]+sum;
                sum=right[i];
            }
        }
        for(i=0;i<n;i++)
            cout<<left[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<right[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
        {
            if(left[i]-right[i]==0)
            {
                cout<<"YES\n";
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"NO\n";
    }
    return 0;
}