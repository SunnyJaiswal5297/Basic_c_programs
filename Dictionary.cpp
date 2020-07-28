#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
const char *dic[][40]={
		"Virat","Run-Machine",
		"Smith","Unstoppable",
		"ABD","Superman",
		"Willimason","Dependable",
		"Root","Talented One",
		"",""
	};
int main()
{
	char word[80],ch,**p;
	do
	{
		puts("\nEnter word:\n");
		gets(word);
		p=(char **)dic;
		do
		{
			if(!strcmp(*p,word))
			{
				puts("Meaning:");
				puts(*(p+1));
				break;
			}
			if(!strcmp(*p,word))
				break;
			p=p+2;
		}while(*p);
		if(!*p)
			puts("\nword not in dictionary,\n");
		puts("Another?y/n:\n");
		cin>>ch;
	}while(ch!='n');
	return 0;
}
