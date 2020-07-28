#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,q;
        cin>>n>>q;
        if(n<q)
            cout<<2*n-q+1<<endl;
        else if(n>q)
            cout<<q-1<<endl;

    }
	return 0;
}