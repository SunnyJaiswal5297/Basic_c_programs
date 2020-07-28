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
        if(n<=6)
            cout<<n-1<<endl;
        else
        {
            n--;
            string str={};
            while(n>0)
            {
                int d=n%6;
                str=to_string(d)+str;
                n/=6;
            }
            cout<<str<<endl;
        }
    }
	return 0;
}