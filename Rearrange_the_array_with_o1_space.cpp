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
        int count=0;
        for(i=0;i<n;i++)
        {
            a[i]+=a[a[i]%n]*n;
            cout<<(a[i]/n)%n<<" ";
        }
    }
    return 0;
}