#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
	        cout<<"1\n";
	    else
	    {
	        int i=0,temp;
            while(pow(2,i)<=n)
            {
                temp=pow(2,i);
                i++;
            }
            cout<<temp;
	    }
	}
	return 0;
}