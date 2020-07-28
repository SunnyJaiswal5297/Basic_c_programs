#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        for(i=3;i<n;i++)
        {
            if(isPrime(i) && isPrime(n-i))
            {
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
    return 0;
}