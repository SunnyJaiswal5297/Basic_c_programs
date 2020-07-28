#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum1=0,sum2=0,temp;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n/2;i++)
            sum1+=a[i];
        for(i=n/2;i<n;i++)
            sum2+=a[i];
        temp=abs(sum1-sum2);
        cout<<temp;
    }
    return 0;
}