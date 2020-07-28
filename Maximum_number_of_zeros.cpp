#include<bits/stdc++.h>
using namespace std;

int count_zeros(string str)
{
    int i,c=0;
    for(i=0;i<str.length();i++)
        if(str[i]=='0')
            c++;
    return c;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin>>n;
        int max_len=0,f=0;
        string res={};
        for(int i=0;i<n;i++)
        {
            int len=0;
            string str={};
            cin>>str;
            len=count_zeros(str);
            if(len>max_len && len != 0)
            {
                max_len=len;
                res=str;
                f=1;
            }
            else if(len==max_len && len!=0)
            {
                f=1;
                if(str.length()==res.length())
                {
                    for(int k=0;k<str.length();k++)
                    {
                        if((str[k]-'0')>(res[k]-'0'))
                        {
                            max_len=len;
                            res=str;
                            break;
                        }
                        else if((str[k]-'0')<(res[k]-'0'))
                            break;
                    }
                }
                else
                {
                    if(str.length()>res.length())
                    {
                        max_len=len;
                        res=str;
                    }
                }
            }
        }
        if(f==0)
            cout<<"-1\n";
        else
            cout<<res<<"\n";
    }
    return 0;
}