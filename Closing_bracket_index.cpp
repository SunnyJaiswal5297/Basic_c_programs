#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string str;
        cin>>str;
        stack<int> stk;
        int open_index;
        cin>>open_index;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='[')
                stk.push(i);
            else if(str[i]==']')
            {
                if(stk.top()==open_index)
                {
                    cout<<i<<endl;
                    break;
                }
                else
                    stk.pop();
            }
        }
    }
    return 0;
}