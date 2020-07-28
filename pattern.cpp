#include<iostream>
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
        int len=2*n;
        for(int i=1;i<=n;i++)       //total length of pattern
        {
            for(int j=1;j<=i;j++)   //initial stars
                cout<<"*";
            for(int k=1;k<=2*(n-i);k++)
                cout<<"#";
            for(int j=1;j<=i;j++)   //initial stars
                cout<<"*";
            cout<<endl;
        }
	}
	return 0;
}