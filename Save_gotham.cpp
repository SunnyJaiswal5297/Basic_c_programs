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
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int b[n];
        b[n-1]=0;
        stack<long int> stk;
        stk.push(a[n-1]);
        for(j=n-2;j>=0;j--)
        {
            while(!stk.empty() && a[j]>=stk.top())
            {
                stk.pop();
            }
            if(stk.empty())
            {
                b[j]=0;
            }
            else
            {
                b[j]=stk.top();
            }
            stk.push(a[j]);
        }
        int sum=0;
        for(j=0;j<n;j++)
            sum+=b[j];
        cout<<sum<<endl;
    }
	return 0;
}