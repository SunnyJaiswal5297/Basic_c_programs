#include<iostream>
using namespace std;
int i=10;
int main()
{
	extern int i;
	cout<<i;
	return 0;
}

