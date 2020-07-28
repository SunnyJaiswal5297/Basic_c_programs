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
        stack<char> char_stk;
        stack<int> num_stk;
        for(int i=0;i<str.length();i++)
        {
            int c=0;
            if(str[i]<='9' &&  str[i]>='0')
            {
                while(str[i] >= '0' && str[i]<='9')
                {
                    c = c*10 +  str[i] - '0';
                    i++;
                }
                i--;
                num_stk.push(c);
            }
            else if(str[i]=='[' || (str[i]>='a' && str[i]<='z'))
                char_stk.push(str[i]);
            else if(str[i]==']')
            {
                string temp={};
                while(char_stk.top()!='[')
                {
                    temp+=char_stk.top();
                    char_stk.pop();
                }
                char_stk.pop();
                int count=num_stk.top();
                num_stk.pop();
                string temp1={};
                while(count--)
                    temp1+=temp;
                int k=temp1.length()-1;
                do
                {
                    char_stk.push(temp1[k]);
                } while(k--);
            }
        }
        string res={};
        while(!char_stk.empty())
        {
            res+=char_stk.top();
            char_stk.pop();
        }
        for(int i=res.length()-1;i>=0;i--)
            cout<<res[i];
        cout<<endl;
    }
	return 0;
}
