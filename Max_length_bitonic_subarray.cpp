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
        int max_len=1,inc=0,dec=0,inc_len=0,dec_len=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<a[i+1])
            {
                if(inc==0)
                    inc=1;
                inc_len++;
            }
            else if(a[i]>a[i+1])
            {
                if(dec==0)
                    dec=1;
                dec_len++;
            }
            if(inc==1 && dec==1)
            {
                max_len=max(max_len,inc_len+dec_len);
            }
        }
    }
	return 0;
}
6
12 4 78 90 45 23