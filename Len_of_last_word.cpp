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
        getline(cin,str);
        char c;
        string res={};
        for(int i=str.length()-1;i>=0;i--)
        {
            c=str[i];
            if(c==' ' && res.length()>0)
                break;
            if(c!=' ')
                res=c+res;
        }
        cout<<res.length()<<endl;
    }
	return 0;
}