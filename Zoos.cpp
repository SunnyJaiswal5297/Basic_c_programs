#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
    cin>>str;
    int c1=0,c2=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='z')
            c1++;
        else
            c2++;
    }
    if((2*c1)==c2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}