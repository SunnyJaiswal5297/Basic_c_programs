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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(i%2!=0)  //for odd indices
            {
                if(a[i]>=a[i+1])
                {
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
            else       //for even indices
            {
                if(a[i]<=a[i+1])
                {
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
    return 0;
}