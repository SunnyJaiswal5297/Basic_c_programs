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
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                break;
            }
        }
        cout<<a[i-1]<<"\n";
    }
    return 0;
}