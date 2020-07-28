#include<iostream>
using namespace std;
//produces wrong result
int main()
{
	double x=10.1,y;
	int *p;
	p=(int *)&x;
	y=*p;
	cout<<"y = "<<y;
	return 0;
}
