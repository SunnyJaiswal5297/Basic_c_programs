#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
	    string s;
	    getline(cin,s);
	    int i,count=0;
	    int len=s.length();
        cout<<len<<"\n";
	    for(i=1;i<len-1;i++)
	    {
            if((s[i]=='2') && (s[i+1]=='1'))
                count++;
	    }
	    cout<<count<<"\n";
	return 0;
}