/* A very simple text editor*/
#include<iostream>
#define MAX 10
#define LEN 10
using namespace std;

char text[MAX][LEN];
int main()
{
	register int i,j,t;
	cout<<"Enter an empty line to quit\n";
	for(t=0;t<MAX;t++)
	{
		cout<<t<<": ";
		gets(text[t]);
		if(!*text[t])  //blank line condition
			break;
	}
	for(i=0;i<t;i++)
	{
		for(j=0;text[i][j];j++)
			cout<<text[i][j];
		cout<<"\n";
	}
	return 0;
}
