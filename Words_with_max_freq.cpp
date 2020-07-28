#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        string str,str1={};
        getline(cin,str);
        map<string,int> m;
        vector<string> v;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
            {
                m[str1]++;
                v.push_back(str1);
                str1={};
            }
            else if(i==str.length()-1)
            {
                str1+=str[i];
                m[str1]++;
                v.push_back(str1);
            }
            else
            {
                str1+=str[i];
            }
        }
        int frq=0;
        string res={};
        for(auto it=v.begin();it!=v.end();++it)
        {
            if(m[*it]>frq)
            {
                frq=m[*it];
                res=*it;
            }
        }
        cout<<res;
    }
	return 0;
}