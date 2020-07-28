#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int pt_count=0,f=0;
        for(i=0;i<n;i++)
        {
            if(k<a[i])
            {
                int temp=a[i]-k;
                k+=temp;
                pt_count+=temp;
                f=1;
                cout<<pt_count<<" "<<a[i]<<"\n";
            }
        }
        if(f==0)
            cout<<"-1\n";
        else
            cout<<pt_count<<"\n";
    }
}