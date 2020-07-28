#include<iostream>
using namespace std;

string stack[50];
int top=-1;

void push(string str)
{
    if(top==49)
        exit(0);
    else
        stack[++top]=str;
}
string pop()
{
    if(top==-1)
        exit(0);
    else
        return stack[top--];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        //cout<<s<<"\n";
        s+='.';
        int len=s.length(),i,j;
        //cout<<len<<"\n";
        string temp;
        for(i=0;i<len;i++)
        {
            if(s[i]=='.')
            {
                push(temp);
                temp={};
            }
            else
                temp+=s[i];
            //cout<<temp<<"\n";
        }
        for(i=top;i>=0;i--)
        {    
            if(i==0)
                cout<<pop();
            else
                cout<<pop()<<".";
        }
        cout<<"\n";
    }
    return 0;
}