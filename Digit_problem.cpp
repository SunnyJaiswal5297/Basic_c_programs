#include<iostream>
using namespace std;

int main() 
{
	string str,res="";
	cin>>str;
	int k,i=0,count=0;
	cin>>k;
	while(count!=k)
    {
        if(str[i]!='9')
        {
            str[i]='9';
            count++;
        }
        i++;
    }
	cout<<str<<endl;	
	return 0;
}