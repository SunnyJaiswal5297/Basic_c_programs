#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        string str;
        cin>>str;
        int check[26]={0},i;;
        for(i=0;i<str.length();i++)
        {
            check[str[i]-'a']++;
        }
        int f=0;
        for(i=0;i<str.length();i++)
        {
            if(check[str[i]-'a']>1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<str[i]<<endl;
        else
            cout<<"-1\n";
    }
	return 0;
}