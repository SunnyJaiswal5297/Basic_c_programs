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
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                int j=i+1,f=0,temp=a[j];
                for(;j<n;j++)
                {
                    if(temp==a[j])
                }

            }
        }
    }
    return 0;
}