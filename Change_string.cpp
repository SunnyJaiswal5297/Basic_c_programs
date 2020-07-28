#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    string str,res={};
	    cin>>str;
	    if(str[0]>='A' && str[0]<='Z')
	    {
	        for(int i=0;i<str.length();i++)
                res+=toupper(str[i]);
	    }
	    else
	    {
	        for(int i=0;i<str.length();i++)
                res+=tolower(str[i]);
	    }
	    cout<<res<<endl;
    }
	return 0;
}