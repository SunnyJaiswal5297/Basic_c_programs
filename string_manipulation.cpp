#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        vector<string> vec(n,"");
        stack<string> stk;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(stk.empty())
                stk.push(vec[i]);
            else
            {
                if(stk.top()==vec[i])
                    stk.pop();
                else
                    stk.push(vec[i]);
            }
        }
        cout<<stk.size()<<endl;
    }
	return 0;
}