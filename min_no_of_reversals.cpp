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
        if(str.length()%2!=0)
            cout<<"-1\n";
        else
        {
            int m,n=0;
            stack<char> s;
            for(int i=0;i<str.length();i++)
            {
                if(str[i]=='{')
                    s.push(str[i]);
                else if(str[i]=='}')
                {
                    if(s.empty())
                        n++;
                    else if(s.top()=='{')
                        s.pop();
                }
            }
            m=s.size();
            cout<<ceil(float(m)/2)+ceil(float(n)/2)<<endl;
        }
    }
	return 0;
}