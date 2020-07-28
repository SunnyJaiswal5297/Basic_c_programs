#include<iostream>
using namespace std;

void swap(int *,int *);
int main()
{
	int i=10,j=20;
	cout<<"i="<<i<<" j="<<j<<"\n";
	swap(&i,&j);
	cout<<"i="<<i<<" j="<<j<<"\n";
	return 0;
}
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
