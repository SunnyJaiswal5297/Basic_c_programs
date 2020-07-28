#include <bits/stdc++.h>
using namespace std;

void convertToRoman(int ) ;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;		
	    convertToRoman(N);
	    cout<<endl;
	}
	return 0;
}

void convertToRoman(int n) 
{
    string thousand[]={"","M","MM","MMM","MV"};
    string hundreds[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string res={};
    res+=thousand[n/1000]+hundreds[(n/100)%10]+tens[(n/10)%10]+ones[n%10];
    cout<<res;
    char ch[20]="12";
    cout<<sizeof(ch);
}