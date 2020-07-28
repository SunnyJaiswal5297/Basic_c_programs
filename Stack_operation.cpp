#include<iostream>
#define SIZE 50
using namespace std;

int *top,*p1,stack[SIZE];
void push(int);
int pop(void);
int main()
{
	int val;
	top=stack;  
	p1=stack;
	do
	{
		cout<<"Enter value :\n";
		//Enter -1 to exit & 0 for pop operartion;
		cin>>val;
		if (val!=0)
		{
			push(val);
		}
		else 
			cout<<pop()<<" is on the top of stack\n";
	}while(val!=-1);
	return 0;
}
void push(int i)
{
	p1++;
	if(p1==(top+SIZE))
	{
		cout<<"Stack overflow\n";
		exit(0);
	}
	*p1=i;
	cout<<i<<" is successfully entered onto stack\n";
}
int pop(void)
{
	if(p1==top)
	{
		cout<<"Stack underflow\n";
		exit(0);
	}
	return *(p1--)+1;
}
