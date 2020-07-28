#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string str;
        cin>>str;
        char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<strlen(vowels);i++)
            str.erase(remove(str.begin(),str.end(),vowels[i]),str.end());
        string str1={};
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=65 && str[i]<=90)
                str[i]=str[i]+32;
            else if(str[i]>=97 && str[i]<=122)
                str[i]=str[i]-32;
        }
        for(int i=0;i<str.length();i++)
            cout<<"#"<<str[i];
        cout<<endl;
    }
    return 0;
}