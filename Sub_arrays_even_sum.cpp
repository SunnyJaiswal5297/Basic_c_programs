#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int count=0,sum=0;
        for(i=0;i<n;i++)
        {
            sum=0;
            if(a[i]%2==0)
                count++;
            sum+=a[i];
            for(j=i+1;j<n;j++)
            {
                sum+=a[j];
                if(sum%2==0)
                    count++;
                cout<<count<<"\n";
            }
        }
        cout<<count<<"\n";
    }
}