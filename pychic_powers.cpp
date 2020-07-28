#include <iostream>
using namespace std;

int main() 
{
	string positive="Good luck!";
	string negative="Sorry, sorry!";
	string str;
	cin>>str;
	int count=0;
	bool zeroflag=false,oneflag=false,flag2=false;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='0')
		{
			if(oneflag)
				count=0;
			count++;
			zeroflag=true;
            oneflag=false;
		}
		else
		{
			if(zeroflag)
				count=0;
			count++;
			oneflag=true;
            zeroflag=false;
		}
		if(count==6)
		{
			cout<<negative<<endl;
			flag2=true;
			break;
		}
        cout<<count<<endl;
	}//0001111110
	if(!flag2)
		cout<<positive<<endl;
	return 0;
}