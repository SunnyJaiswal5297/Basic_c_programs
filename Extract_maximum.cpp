#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string a;
	    cin>>a;
	    int i,res=0,curr=0;
	    for(i=0;i<a.length();i++)
	    {
	        if(a[i]>='a' && a[i]<='z')
	        {
	            curr=0;
	            continue;
	        }
	        else
	        {
	            if(curr==0)
	                curr+=a[i]-'0';
	            else
	                curr=curr*10+a[i]-'0';
	        }
	        res=max(res,curr);
	    }
	    res=max(res,curr);
	    cout<<res<<endl;
    }
	return 0;
}