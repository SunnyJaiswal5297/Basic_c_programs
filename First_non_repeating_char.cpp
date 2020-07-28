#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        char str[n];
        for(i=0;i<n;i++)
            cin>>str[i];
        char ch[26]={};
        for(i=0;i<n;i++)
        {
            ch[(str[i]-'a')]++;
        }
        int f=0;
        for(i=0;i<n;i++)
        {
            if(ch[(str[i]-'a')]==1)
            {
                f=1;
                cout<<str[i]<<"\n";
                break;
            }
        }
        if(f==0)
            cout<<"-1\n";
    }
}