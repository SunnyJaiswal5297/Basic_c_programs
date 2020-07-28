#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string str,res;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            if(isupper(str[i]))
                str[i]=str[i]+32;
        }
        cout<<str<<endl;
        stack<char> stk;
        int count=0;
        for (int i=0;i<str.length();i++)
        {
            if(stk.empty())
            {
                count++;
                stk.push(str[i]);
            }
            else if(str[i]==stk.top())
                count++;
            else
            {
                res+=to_string(count)+stk.top();
                stk.pop();
                stk.push(str[i]);
                count=1;
            }
        }
        if(!stk.empty())
            res+=to_string(count)+stk.top();
        cout<<res<<endl;
    }
	return 0;
}
/*
aabbB
*/