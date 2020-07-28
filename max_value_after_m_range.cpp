#include<iostream>
#include<limits.h>
#define MIN INT_MIN
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        int arr[n];
        for(i=0;i<n;i++)
            arr[i]=0;
        while(m--)
        {
            int a,b,k;
            cin>>a>>b>>k;
            if(a>=0 && a<=n-1 && b>=0 && b<=n-1)
            {
                for(i=a;i<=b;i++)
                    arr[i]=arr[i]+k;
            }
        }
        int min=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>min)
                min=arr[i];
        }
        cout<<min<<"\n";
    }
    return 0;
}