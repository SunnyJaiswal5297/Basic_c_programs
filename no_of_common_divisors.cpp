#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int a,b;
        cin>>a>>b;
        if(b<a)
            swap(a,b);
        int gcd;
        int rem;
        while(1)
        {
            rem=b%a;
            if(rem==0)
                break;
            b=a;
            a=rem;
        }
        int count=0;
        cout<<a<<endl;
        for(int i=1;i<=a;i++)
            if(a%i==0)
                count++;
        cout<<count<<endl;
    }
	return 0;
}