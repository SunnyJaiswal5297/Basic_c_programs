#include<bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
    if(ch=='+' or ch=='-')
        return 1;
    else if(ch=='*' or ch=='/')
        return 2;
    else if(ch=='^')
        return 3;
    else
        return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str,res="";
	    cin>>str;
	    stack<char> s;
        s.push('$');
        for(int i=0;i<str.length();i++)
        {
            if(isalnum(str[i]))
                res+=str[i];
            else if(str[i]=='(')
                s.push(str[i]);
            else if(str[i]=='^')
                s.push(str[i]);
            else if(str[i]==')')
            {
                while(s.top()!='$' and s.top()!='(')
                {
                    res+=s.top();
                    s.pop();
                }
                s.pop();
            }
            else
            {
                if(precedence(str[i])>precedence(s.top()))
                    s.push(str[i]);
                else
                {
                    while(s.top()!='$' and precedence(str[i])<=precedence(s.top()))
                    {
                        res+=s.top();
                        s.pop();
                    }
                    s.push(str[i]);
                }
            }
        }
        while(s.top()!='$')
        {
            res+=s.top();
            s.pop();
        }
        cout<<res<<endl;
    }
	return 0;
}