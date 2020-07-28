#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,i;
        cin>>n;
        bool check_prime[n+1];
        memset(check_prime,true,(n+1)*sizeof(bool)); 
        check_prime[0]=false;
        check_prime[1]=false;
        for(i=2;i<=n;i++)
        {
            if(check_prime[i])
            {
                int k=2;
                while(i*k<=n)
                {
                    check_prime[i*k]=false;
                    k++;
                }
            }
        }
        for(i=0;i<=n;i++)
            if(check_prime[i])
                cout<<i<<" ";
        cout<<endl;       
    }
	return 0;
}