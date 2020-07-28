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
        stack<int> stk;
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
            {
                ++count;
                stk.push(count);
                cout<<count;
            }
            else if(str[i]==')')
            {
                cout<<stk.top();
                stk.pop();
            }
        }
        cout<<endl;
    }
    return 0;
}