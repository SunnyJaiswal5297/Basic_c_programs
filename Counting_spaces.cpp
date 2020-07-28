#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char s[80],*str;
	int space;
	cout<<"Enter the required string\n";
	gets(s);
	puts(s);
	str=s;
	for(str;*str;str++)
	{
		if(*str!=' ')
			continue;
		space++;
	}
	cout<<space;
}
