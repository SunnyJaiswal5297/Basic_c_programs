#include<iostream>
using namespace std;

void fun()
{
	static int j=1;
	cout<<j<<endl;
	j++;
}
int main()
{
	int i;
	for(i=0;i<9;i++)
		fun();
	return 0;
}
