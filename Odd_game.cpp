#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long int k=0;
        while(pow(2,k)<=n)
        {
            k++;
        }
        cout<<long(pow(2,k-1))<<"\n";
    }
    return 0;
}