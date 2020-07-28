#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int a[n],i,num,k=1,flag=0; 
        for(i=0;i<n;i++)
        {
            cin>>num;
            if(flag==0)
            {
                if(k<n)
                {
                    a[k]=num;
                    if(k+2<n)
                        k=k+2;
                    else
                    {
                        if(k==n-1)
                            k--;
                        else
                            k++;
                        flag=1;
                        continue;
                    }
                }
            }
            if(flag==1)
            {
                a[k]=num;
                k-=2;
            }
        }
        
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
	return 0;
}