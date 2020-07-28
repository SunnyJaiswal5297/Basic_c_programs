#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        char num[]={'\0','2','3','5','7'};
        int n;
        string res;
        cin>>n;
        while(n>0)
        {
            int rem=n%4;
            if(rem==0)
            {
                res=num[4]+res;
                n=n/4-1;
            }
            else
            {
                res=num[rem]+res;
                n=n/4;
            }
        }
        cout<<res<<endl;
    }
	return 0;
}