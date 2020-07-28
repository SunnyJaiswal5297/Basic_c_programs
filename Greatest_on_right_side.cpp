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
        for(i=0;i<n;i++)
        {
            if(i==n-1)
                a[i]=-1;
            else
            {
                int temp=a[i+1];
                for(j=i+1;j<n;j++)
                {
                    if(a[j]>=temp)
                        temp=a[j];
                }
                a[i]=temp;
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}