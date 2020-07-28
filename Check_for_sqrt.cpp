#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sq_root=sqrt(n);
        if((sq_root*sq_root)==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
