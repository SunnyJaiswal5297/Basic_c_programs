#include<iostream>
using namespace std;

bool XOR(bool  a,bool b)
{
	return (a==b?0:1);
}
int main()
{
	bool x,y,result;
	cout<<"Enter the two bool varaiables:\n";
	cin>>x>>y;
	result=XOR(x,y);
	cout<<x<<" XOR "<<y<<" = "<<result<<endl;
	return 0;
}
