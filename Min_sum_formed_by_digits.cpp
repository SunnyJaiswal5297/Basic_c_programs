#include<iostream>
#include<algorithm>
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
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
        int num1=0,num2=0,k1=0,k2=0;
        for(i=n-1;i>=0;i--)
        {
            if(i%2==0)
            {
                num1+=a[i]*(pow(10,k1));
                k1++;
            }
            else
            {
                num2+=a[i]*(pow(10,k2));
                k2++;
            }
        }
        cout<<num1<<"\n";
        cout<<num2<<"\n";
        cout<<num1+num2<<"\n";
    }
    return 0;
}