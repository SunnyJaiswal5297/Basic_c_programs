#include<iostream>
using namespace std;

void fun(const int a)
{
	//this is not possible a=10;
	cout<<a<<endl;
}
int main()
{
	int i;
	for(i=0;i<10;i++)
		fun(i);
	return 0;
}
