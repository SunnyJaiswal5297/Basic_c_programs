#include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}
int atoi(string str)
{
    int num=0,i=0,flag=0;
    if(str[i]=='-')
    {
        flag=1;
        i=1;
    }
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            int d=str[i]-'0';
            num=num*10+d;
            i++;
        }
        else
            return -1;
    }
    if(flag==1)
        return (num-2*num);
    else
        return num;
}