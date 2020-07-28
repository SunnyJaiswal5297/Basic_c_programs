#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        unsigned long long int num,res=1;
        cin>>num;
        if(num==00)
            cout<<"0\n";
        else
        {
             while(num!=0)
             {
                 res=(res*(num%100))%1000000007;
                 num=num/100;
             }
             cout<<res%1000000007;
        }
    }
    return 0;
}