#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long a=0,b=1,c;
	    while(n--)
	    {
	        c=a+b;
	        a=b;
	        b=c;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}