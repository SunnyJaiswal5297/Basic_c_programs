#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,dis=0;
        cin>>h;
        while(h)
        {
            dis+=2*h;
            h/=2;
        }
        cout<<dis;
    }
    return 0;
}