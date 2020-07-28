#include<iostream>
using namespace std;
string str="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long int num;
        cin>>num;
        string res={};
        while(num)
        {
            res=res+str[num%62];
            num/=62;
        }
        for(int i=res.length()-1;i>=0;i--)
            cout<<res[i];
        cout<<endl;
    }
	return 0;
}