#include <iostream>
#define ll long long int
using namespace std;

int main() 
{
    ll t,n,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n] ;
        ll b[1000001] = {0};
        ll max=0,p;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i] ;   
            if(a[i]>max)
                max=a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>p ;
            b[p]++;
        }    
        for(ll i=1;i<max+2;i++)
        {
            b[i]+=b[i-1] ;    
        }
        cin>>q;
        while(q--)
        {
            ll index ;
            cin>>index ;
            cout<<b[ a[index] ]<<endl ;;
        }
    }
}