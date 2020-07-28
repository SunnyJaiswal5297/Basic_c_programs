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
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int max_diff=0,f=0;
        int min=0;
        for(i=1;i<n;i++)
        {
            if(a[i]-a[min]>max_diff)
                max_diff=a[i]-a[min];
            if(a[i]<a[min] && max_diff==0)
                min=i;
            if(a[i]-a[min]<max_diff && max_diff!=0)
            {
                int index=i-1;
                cout<<"("<<min<<" "<<index<<") ";
                max_diff=0;
                min=i;
                f=1;
            }
            if(max_diff!=0 && i==n-1)
            {
                int index=i;
                cout<<"("<<min<<" "<<index<<") ";
                f=1;
            }
        }
        if(f==0)
            cout<<"No Profit";
        cout<<"\n";
    }
}