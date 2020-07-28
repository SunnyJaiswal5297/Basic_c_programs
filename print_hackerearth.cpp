#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	long int b[26]={0},m=0,i;
	for(int i=0;i<str.length();i++)
	{
		b[str[i]-'a']++;
	}
	string check="hackerearth";
	while(1)
    {
        for(i=0;i<check.length();i++)
        {
            if(b[check[i]-'a']>0)
                b[check[i]-'a']--;
            else
                break;
        }
        if(i==check.length())
            m++;
        else
            break;
    }
	cout<<m<<endl;
	return 0;
}