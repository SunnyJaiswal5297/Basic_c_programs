#include<bits/stdc++.h>
using namespace std;

int valueOfExpression(string str)
{
    stack<int> s1,s2;
    int i=0,n=str.length();
    while(i<n)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            s1.push(str[i]-'0');
            if(s1.size()>=2)
            {
                int b=s1.top();s1.pop();
                int a=s1.top();s1.pop();
                if(s2.top()=='+')
                    s1.push(a+b);
                else
                    s1.push(a-b);
                s2.pop();
            }
        }
        else
        {
            s2.push(str[i]);
        }
        i++;
    }
    return s1.top();
}

int main() 
{
	int n,i,res=INT_MIN;
	cin>>n;
	vector<string> vs(n);
	for(i=0;i<n;i++)
		cin>>vs[i];
	for(i=0;i<n;i++)
        res=max(res,valueOfExpression(vs[i]));
    cout<<res<<endl;
	return 0;
}
//8-6+2+4+3-6+1