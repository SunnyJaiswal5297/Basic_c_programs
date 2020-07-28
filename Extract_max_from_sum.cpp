#include<bits/stdc++.h>
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
        int m=INT_MIN;
        string temp={};
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                temp=temp+str[i];
            }
            else if(temp.length()!=0)
            {
                int num=stoi(temp);
                m=max(m,num);
                temp={};
            }
        }
        if(temp.length()!=0)
            m=max(m,stoi(temp));
        cout<<m<<endl;
    }
	return 0;
}