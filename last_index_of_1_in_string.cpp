#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int i,f=0;
        int len=str.length();
        for(i=len-1;i>=0;i--)
        {
            if(str[i]=='1')
            {
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"-1\n";
        else
            cout<<i<<"\n";
    }
    return 0;
}