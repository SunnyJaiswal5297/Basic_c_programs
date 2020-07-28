#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n==1)
            cout<<"1";
        else if(n==2)
            cout<<"11";
        else
        {
            string str="11";
            for(int i=3;i<=n;i++)
            {
                str+='*';
                int len=str.length();
                string str2="";
                int count=1;
                for(int j=1;j<len;j++)
                {
                    if(str[j]!=str[j-1])
                    {
                        str2+=count+'0';
                        str2+=str[j-1];
                        count=1;
                    }
                    else
                        count++;
                }
                str=str2;
            }
            cout<<str<<"\n";   
        }
    }
    return 0;
}