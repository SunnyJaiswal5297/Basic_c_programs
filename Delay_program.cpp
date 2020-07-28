#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	int i,j;
	cout<<"Hold on!!!\n";
	cout<<"Processing";
	for(i=0;i<3;i++)
	{
		cout<<".";
		sleep(3000);
	}
}
