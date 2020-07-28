#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int count=0,n;
        cin>>n;
		string str;
		cin>>str;
		int n1=str.length();
		bool flag=false;
		for(int i=0;i<n1;i++)
		{
			if(str[i]>='0' && str[i]<='9')
			{
				if(!flag)
                {
                    count++;
                    flag=true;
                }
			}
            else
            {
                flag=false;
            }
		}
		cout<<count<<endl;
	}
	return 0;
}