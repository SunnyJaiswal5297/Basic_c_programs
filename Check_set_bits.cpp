#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,rem,flag;
        cin>>num;
        while(num>1)
        {
            flag=0;
            rem=num%2;
            if(rem==0)
            {
                cout<<"NO\n";
                flag=1;
                break;
            }
            else
            {
                num/=2;   
            }
        }
        if(flag==0)
            cout<<"YES\n";
    }
    return 0;
}