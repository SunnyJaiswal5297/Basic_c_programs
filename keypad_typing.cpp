#include<bits/stdc++.h>
using namespace std;
int num(char ch)
{   
        if(ch=='a' or ch=='b' or ch=='c')
            return 2;
        if (ch=='d' or ch=='e' or ch=='f')
            return 3;
        if (ch=='g' or ch=='h' or ch=='i')
            return 4;
        if (ch=='j' or ch=='k' or ch=='l')
            return 5;
        if (ch=='m' or ch=='n' or ch=='o')
            return 6;
        if (ch=='p' or ch=='q' or ch=='r' or ch=='s')
            return 7;
        if (ch=='t' or ch=='u' or ch=='v')
            return 8;
        if (ch=='w' or ch=='x' or ch=='y' or ch=='z')
            return 9;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string str,res="";
        cin>>str;
        for(int i=0;i<str.length();i++)
            res+=to_string(num(str[i]));
        cout<<res<<endl;
    }
	return 0;
}