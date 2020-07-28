#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            double t1=sqrt(5*arr[i]*arr[i]-4);
            double t2=sqrt(5*arr[i]*arr[i]+4);
            if((t1-floor(t1)==0) || (t2-floor(t2)==0))
                cout<<arr[i]<<" ";
        }
    }
    return 0;
}