#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        string res={};
        while(n)
        {
            if(n%26==0)
            {
                res=char(90)+res;
                n=n/26-1;
            }
            else
            {
                int x=n%26;
                res=char(x+65-1)+res;
                n=n/26;
            }
        }
        cout<<res<<endl;
    }
	return 0;
}