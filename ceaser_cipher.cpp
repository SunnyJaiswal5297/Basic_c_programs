#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		if(str1.length()!=str2.length())
			cout<<"-1"<<endl;
		else
		{
			bool flag=true;
			int n=str1.length(),key,diff=-1;
			for(int i=1;i<=25;i++)
            {
                if(char((str1[0]-'A'+i)%26+65)==str2[0])
                {
                    key=i;
                    break;
                }
            }
            for(int i=1;i<n;i++)
            {
                if(char((str1[i]-'A'+key)%26+65)!=str2[i])
                {
                    flag=false;
                    break;
                }
            }
			if(flag)
				cout<<key<<endl;
			else
				cout<<"-1"<<endl;
		}
	}
	return 0;
}