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
        long long int prime,i=0,j; 
        int p=2;
        while(i<n)
        {
            int f=0;
            for(j=2;j<p;j++)
            {
                if(p%j==0)
                {
                    f=1;
                    break;
                }
                else
                {
                    f=0;
                }
            }
            if(f==0)
            {
                prime=p;
                i++;
            }
            p++;
        }
        cout<<(prime*prime)+1<<endl;
    }
	return 0;
}