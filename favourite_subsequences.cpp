#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	string str;
	cin>>str;
	ll a=0,b=0,c=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='a')
			a=1+2*a;
		else if(str[i]=='b')
			b=a+2*b;
		else if(str[i]=='c')
			c=b+2*c;
	}
	cout<<(c%1000000007)<<endl;
	return 0;
}