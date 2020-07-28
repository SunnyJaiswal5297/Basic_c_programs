#include<iostream>
using namespace std;
#define M 1000000007

int main()
{
    int n;
    cin>>n;
    int a[n],i,p=1;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        p=(p*a[i])%M;
    cout<<p;
    return 0;
}