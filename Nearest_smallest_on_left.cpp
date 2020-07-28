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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        stack<int> s;
        for(i=0;i<n;i++)
        {
            if(s.empty())
                cout<<"-1 ";
            else
            {
                while(!s.empty() && s.top()>=a[i])
                    s.pop();
                if(s.empty())
                    cout<<"-1 ";
                else
                    cout<<s.top()<<" ";
            }
            s.push(a[i]);
        }
    }
	return 0;
}