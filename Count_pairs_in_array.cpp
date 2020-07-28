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
        int a[n],count=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(i*a[i]>j*a[j])
                    count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}