#include <iostream>
using namespace std;

string cipher(string str,int k)
{
    string res="";
    for(int i=0;i<str.length();i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9'))
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                res+=char((((str[i]-'A')+k)%26)+65);
            }
            else if(str[i]>='a' && str[i]<='z')
            {
                res+=char((((str[i]-'a')+k)%26)+97);
            }
            else if(str[i]>='0' && str[i]<='9')
            {
                res+=char((((str[i]-'0')+k)%10)+48);
            }
        }
        else
        {
            res+=str[i];
        }
    }
    return res;
}
int main() 
{
	string str,res;
    cin>>str;
    int k;
    cin>>k;
    res=cipher(str,k);
    cout<<res<<endl;
	return 0;
}