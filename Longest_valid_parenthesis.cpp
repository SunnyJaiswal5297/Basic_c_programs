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
        int len=str.length();
        int max_diff=0;
        stack<int> s;
        s.push(-1);
        for(int i=0;i<len;i++)
        {
            if(str[i]=='(')
                s.push(i);
            else
            {
                s.pop();
                if(!s.empty())
                    max_diff=max(max_diff,i-s.top());
                else
                    s.push(i);
            }
        }
        cout<<max_diff<<"\n";
    }
    return 0;
}