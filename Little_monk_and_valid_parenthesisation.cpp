#include<bits/stdc++.h>
using namespace std;

int main() 
{
	long int n;
	cin>>n;
	long int a[n],i,c=0,m=INT_MIN;
	for(i=0;i<n;i++)
		cin>>a[i];
    stack<long int> s;
	if(n==1)
		cout<<c<<endl;
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>0)
            {
				s.push(a[i]);
            }
			else
			{
				if(!s.empty() && a[i]<0 && s.top()==abs(a[i]))
				{
					c+=2;
					m=max(m,c);
					s.pop();
				}
				else
				{
					c=0;
                    while(!s.empty())
                        s.pop();
				} 
			}
		}
		m=max(c,m);
		cout<<m<<endl;
	}
	return 0;
}