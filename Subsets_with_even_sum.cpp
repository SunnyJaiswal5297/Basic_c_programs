#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int count_even=0,count_odd=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
                count_even++;
            else
                count_odd++;
        }
        cout<<count_odd+count_even<<endl;
    }
	return 0;
}