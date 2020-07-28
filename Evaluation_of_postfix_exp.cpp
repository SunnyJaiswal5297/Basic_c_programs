#include<iostream>
#include<stack>
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
        stack<int> stk;
        for(int i=0;i<str.length();i++)
        {
            if(isdigit(str[i]))
            {
                stk.push(str[i]-'0');
            }
            else
            {
                int op1,op2,res;
                if(str[i]=='*')
                {
                    op1=stk.top();stk.pop();
                    op2=stk.top();stk.pop();
                    res=op2*op1;
                    stk.push(res);
                }
                else if(str[i]=='+')
                {
                    op1=stk.top();stk.pop();
                    op2=stk.top();stk.pop();
                    res=op2+op1;
                    stk.push(res);
                }
                else if(str[i]=='-')
                {
                    op1=stk.top();stk.pop();
                    op2=stk.top();stk.pop();
                    res=op2-op1;
                    stk.push(res);
                }
                if(str[i]=='/')
                {
                    op1=stk.top();stk.pop();
                    op2=stk.top();stk.pop();
                    res=op2/op1;
                    stk.push(res);
                }
            }
        }
        cout<<stk.top()<<endl;
    }
    return 0;
}
