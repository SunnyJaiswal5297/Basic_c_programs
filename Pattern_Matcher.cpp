#include<bits/stdc++.h>
using namespace std;

stack<char> stk;
void follPatt(string s)
{
    int f=0;
    if(s[0]=='y')
        f=1;
    else
    {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='x' && count=0)
            {
                if(stk.empty())
                {
                    stk.push(s[i]);
                    count++;
                }
                else
                {
                    f=1;
                    break;
                }
            }
            else if(s[i]=='x' && count!=0)
            {
                stk.push(s[i]);
                count++;
            }
            else if(s[i]=='y' && !stk.empty())
                stk.pop();
            else if(s[i]=='y' && stk.empty())
            {
                f=1;
                break;
            }
        }
    }
    if(stk.empty() && f==0)
        cout<<"1\n";
    else
        cout<<"0\n";
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string str;
        cin>>str;
        cout<<str<<endl;
        if(str[0]=='y')
            cout<<"0\n";
        else
             follPatt(str);
    }
    return 0;
}