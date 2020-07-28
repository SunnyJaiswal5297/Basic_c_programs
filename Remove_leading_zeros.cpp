#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        cin>>str;
        int len=str.length();
        int f=0,k=0;
        for(int i=0;i<len;)
        {
            if(str[i]=='.')
            {
                if(k==3)
                    cout<<"0"<<str[i];
                else
                    cout<<str[i];
                i++;
                f=0;k=0;
            }
            if(str[i]-'0'>0 && i%4==0)
            {
                cout<<str[i]<<str[i+1]<<str[i+2];
                i+=3;
                f=0;
            }
            else if(str[i]=='0' && f==0)
            {
                i++;
                k++;
            }
            else 
            {
                cout<<str[i];
                i++;
                f=1;
            }
        }
    }
    return 0;
}