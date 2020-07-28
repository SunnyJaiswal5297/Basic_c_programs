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
        int a[n],i,f,sum=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            int num=a[i];
            while(num)
            {
                sum+=num%10;
                num/=10;
            }
        }
        if(sum%3==0)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
	return 0;
}