#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long int n,i,cnt=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            string str=to_string(i);
            size_t found=str.find("4");
            if(found!=string::npos)
                cnt++;
        }
        cout<<cnt<<endl;
    }
	return 0;
}