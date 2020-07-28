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
        for(i=0;i<n-1;i++)
        {
            int f=0;
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<"\n";
    }
    return 0;
}