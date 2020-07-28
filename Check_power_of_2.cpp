#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long n_minus=n-1;
        if((n & n_minus) == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}