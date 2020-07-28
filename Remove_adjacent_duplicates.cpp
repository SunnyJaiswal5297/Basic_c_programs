#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    stack<char> s1,s2;
        for(int i=0;i<str.length();i++)
        {
            if(i==str.length()-1)
            {
                if(s2.top()!=str[i])
                    s1.push(str[i]);
            }
            else if(str[i]!=str[i+1] && (s2.empty() || str[i]!=s2.top()))
            {
                s1.push(str[i]);
            }
            else 
            {
                s2.push(str[i]);
            }
        }
        string res={};
        while(!s1.empty())
        {
            res=s1.top()+res;
            s1.pop();
        }
        cout<<res<<endl;
    }
	return 0;
}