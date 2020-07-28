#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        string n;
        int p;
        cin>>n;
        cin>>p;
        int unit_digit=n[n.length()-1]-'0';
        if(unit_digit==1 || unit_digit==6 || unit_digit==5 || unit_digit==6)
            cout<<"1\n";
        if(unit_digit==2 || unit_digit==3 || unit_digit==7 || unit_digit==8)
        {
            if(p%4==1)
                cout<<"1\n";
            else
                cout<<"0\n";
        }
        if(unit_digit==4 || unit_digit==9)
        {
            if(p%2!=0)
                cout<<"1\n";
            else
                cout<<"0\n";
        }
    }
	return 0;
}