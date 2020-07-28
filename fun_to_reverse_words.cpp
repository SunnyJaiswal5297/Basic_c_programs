#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void reverseWords(char*);
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        char s[10000];
        cin >> s;
        reverseWords(s);
        cout<<endl;
    }
}

void reverseWords(char *s) 
{
    stack<string> stk;
    string temp={};
    int top=0;
    while(*s!='\0')
    {
        if(*s=='.')
        {
            stk.push(temp);
            temp={};
            top++;
        }
        else
        {
            temp=temp+(*s);
            //cout<<temp<<endl;
        }
        s++;
    }
    if(!temp.empty())
    {
        stk.push(temp);
        top++;
    }
    cout<<top<<endl;
    while(!stk.empty())
    {
        if(top==1)
            cout<<stk.top();
        else
            cout<<stk.top()<<".";
        stk.pop();
        top--;
    }
}
