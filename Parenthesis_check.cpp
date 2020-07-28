#include<bits/stdc++.h>
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
        int n=str.length(),f=0;
        stack<char> s;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(' || str[i]=='{' || str[i]=='[')
                s.push(str[i]);
            else
            {
                if(str[i]==')')
                {
                    if(s.top()=='(')
                        s.pop();
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else if(str[i]=='}')
                {
                    if(s.top()=='{')
                        s.pop();
                    else
                    {
                        f=1;
                        break;
                    }
                }
                else if(str[i]==']')
                {
                    if(s.top()=='[')
                        s.pop();
                    else
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f==1)
            cout<<"not balanced\n";
        else if(f==0)
            cout<<"balanced\n";
    }
}