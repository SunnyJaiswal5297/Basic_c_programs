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
        int len=str.length();
        int i=0,c=0;
        while(i!=len)
        {
            if(str[i]=='1')
                c++;
            i++;
        }
        int res=(c*(c-1))/2;
        cout<<res<<"\n";
    }
    return 0;
}