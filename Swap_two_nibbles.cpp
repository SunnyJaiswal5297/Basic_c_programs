#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
        cin>>n;
        cout<<(((n & 0x0f)<<4)|((n & 0xf0)>>4))<<endl;
    }
	return 0;
}