#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int count=0;
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]%a[j]==k)
                    count++;
            }
        }
    }
}