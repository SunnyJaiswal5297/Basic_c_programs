#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	char ch;
	do
	{
		ch = getchar();
		if(islower(ch))
			ch=toupper(ch);
		else
			ch=tolower(ch);
		putchar(ch);		
	}while(ch!='.');
	return 0;
}
