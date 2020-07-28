#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string a,b;
        cin>>a>>b;
        int len1=a.length();
        int len2=b.length();
        if((a[2]==b[0] && a[0]==b[len2-2]) || (a[0]==b[2] && a[len1-2]==b[0]))
            cout<<"1\n";
        else
            cout<<"0\n";
    }
	return 0;
}
//case 1
//a:amazon
//b:azonam
//case 2
//a:amazon
//b:onamaz