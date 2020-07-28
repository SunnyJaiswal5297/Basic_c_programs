#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int no_of_z=0,no_of_o=0;
	for(int i=0;str.length();i++)
	{
		if(str[i]=='z')
			no_of_z++;
		else
			no_of_o++;
	}
	if((2*no_of_z)==no_of_o)
		cout<<"Yes";
	else
		cout<<"No";
}