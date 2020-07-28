#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,res=0,i=0;
        cin>>n;
        while(1)
        {
            int curr=pow(2,i);
            i++;
            if(curr-1>n)
                break;
            res=max(res,curr-1);
        }
        cout<<res<<endl;
	}
	return 0;
}