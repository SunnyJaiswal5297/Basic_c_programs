#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    int a,b;
    cout<<"Enter value of a & b:\n";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}