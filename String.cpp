#include<iostream>
using namespace std;

int main()
{
	string phrase="Sunny kumar jaiswal";
	cout<<phrase[1]<<endl;  //indexing of string
	//common string functions
	cout<<phrase.length()<<endl;  //length of string
	cout<<phrase.find('n',0)<<endl;  //find substring of character from given index position
	cout<<phrase.substr(1,5)<<endl;  //print a substring from a given position
	
	return 0;
}
