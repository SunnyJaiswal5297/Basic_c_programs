#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		float l,r,s,i=1;
		cin>>l>>r>>s;
		if(s>l)
			cout<<"-1"<<" ";
		else
			cout<<ceil((double)l/(double)s)<<" ";
		if(s>r)
			cout<<"-1"<<endl;
		else
			cout<<floor(r/s)<<endl;
	}
	return 0;
}