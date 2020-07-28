#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,count=0;
        cin>>n;
        while(n)
        {
            if(n%2==0 && n>2)
            {
                n=n/2;
                count++;
            }
            else 
            {
                if(n==1)
                {
                    count+=1;
                    break;
                }
                if(n==2)
                {n
                    count+=2;
                    break;
                }
                n=n/2;
                count+=2;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}