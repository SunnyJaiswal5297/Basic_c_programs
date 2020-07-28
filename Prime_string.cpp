#include<iostream>
using namespace std;

bool is_prime(int num)
{
    for(int i=2;i<=num/2;i++)
        if(num%2==0)
            return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n,i;
        cin>>n;
        char str[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>str[i];
            sum+=(int)str[i];
        }
        if(is_prime(sum))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}