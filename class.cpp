#include<iostream>
using namespace std;

class Book
{
	public:
		string title;
		string author;
		int pages;
		float price;
	Book(string atitle,string aauthor,int apages)
	{
		cout<<"\nCreating book"<<endl;
		title=atitle;
		author=aauthor;
		pages=apages;
	}
};
int main()
{
	Book b1("C++ in fun way","S.K. Jaiswal",204);
	cout<<"Author:"<<b1.author<<"\nTitle:"<<b1.title<<"\nPages:"<<b1.pages;
	Book b2("Java in fun way","S.K. Jaiswal",250);
	cout<<"Author:"<<b2.author<<"\nTitle:"<<b2.title<<"\nPages:"<<b2.pages;
	return 0;
}
