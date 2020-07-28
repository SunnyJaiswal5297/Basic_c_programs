#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long int num,i;
        cin>>num;
        string str=to_string(num);
        int front=0,rear=str.length()-1;
        if(str.length()%2!=0)
        {
            int s1=0,s2=0;
            for(i=0;i<str.length()/2;i++)
                s1+=str[i]-'0';
            for(i=str.length()-1;i>str.length()/2;i--)
                s2+=str[i]-'0';
            if(s1==s2)
                cout<<"1\n";
            else
                cout<<"0\n";
        }
        else
            cout<<"0\n";
    }
	return 0;
}