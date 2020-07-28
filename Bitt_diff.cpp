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
        if(a>b)
            swap(a,b);
        int total=0,rem1,rem2;
        while(a>0 && b>0)
        {
            rem1=a%2;
            rem2=b%2;
            if(rem1!=rem2)
                total++;
            a=a/2;
            b=b/2;
        }
        if(b!=0)
        {
            while(b!=0)
            {
                rem2=b%2;
                if(rem2)
                    total++;
                b=b/2;
            }
        }
        cout<<total<<endl;
    }
	return 0;
}