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
        int curr=a[0]-'0';
        for(int i=1;i<a.length();i++)
            curr=max(curr*(a[i]-'0'),curr+(a[i]-'0'));
        cout<<curr<<endl;
    }
	return 0;
}
