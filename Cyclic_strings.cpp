#include<iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		long long int count=0;
		while(str.size()!=0)
		{
			if(str.size()%2==0)
			{
                count+=str.size();
                int index=str.size()/2-1;
                str.erase(index,2);
			}
			else
			{
                count+=str.size();
				str.erase(str.begin()+str.size()/2);
			}
		}
		cout<<count<<endl;
	}
	return 0;
}