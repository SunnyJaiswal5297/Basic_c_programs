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
        int mul=10;
        while(mul)
        {
            cout<<n*mul<<" ";
            mul--;
        }
        cout<<endl;
    }
    return 0;
}