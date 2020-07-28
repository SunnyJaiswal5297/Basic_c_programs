#include <iostream>
using namespace std;

bool is_vowel(char ch)
{
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y')
		return true;
	else
		return false;
}

int main() 
{
	string str;
	cin>>str;
	string res1="",res2="",res3="";
    bool flag=true;
    char ch;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='-')
            continue;
        else if(i==2)
            ch=str[i];
        else
        {
            if(i<=1)
                res1=res1+str[i];
            else if(i>=3 && i<=5)
                res2=res2+str[i];
            else if(i>=7 && i<=8)
                res3=res3+str[i];
        }

    }
    if(is_vowel(ch))
        flag=false;
    else
    {
        cout<<res1<<" "<<res2<<" "<<res3<<endl;
        for(int i=0;i<res1.length()-1;i++)
        {
            if(((res1[i]-'0')+(res1[i+1]-'0'))%2!=0)
                flag=false;
        }
        for(int i=0;i<res2.length()-1;i++)
        {
            if(((res2[i]-'0')+(res2[i+1]-'0'))%2!=0)
                flag=false;
        }
        for(int i=0;i<res3.length()-1;i++)
        {
            if(((res3[i]-'0')+(res3[i+1]-'0'))%2!=0)
                flag=false;
        }
    }
    if(flag)
        cout<<"valid"<<endl;
    else
        cout<<"invalid"<<endl;
	return 0;
}
// 12X345-67