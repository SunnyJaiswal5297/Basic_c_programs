#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k,i=0,res;
        cin>>n>>k;
        while(pow(k,i)<n)
        {
            res=pow(k,i);
            i++;
        }
        cout<<res<<endl;
    }
	return 0;
}