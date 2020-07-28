#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int sh,sm,eh,em;
		cin>>sh>>sm>>eh>>em;
		int req_hr,req_min;
        if(sh==eh)
            req_hr=0;
        else
            req_hr=eh-sh-1;
        req_min=(60-sm)+em;
        if(req_min>=60)
        {
            req_hr++;
            req_min=req_min-60;
        }
        cout<<req_hr<<" "<<req_min<<endl;
    }
	return 0;
}
// 10 00
// 11 00 