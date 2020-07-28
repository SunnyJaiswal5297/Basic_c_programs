#include<iostream>
using namespace std;
int floor_tile(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else
    {
        return floor_tile(n-1)+floor_tile(n-2);
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<floor_tile(n)<<endl;
    }
	return 0;
}