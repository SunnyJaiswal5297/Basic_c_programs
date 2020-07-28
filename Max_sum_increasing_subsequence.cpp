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
        int a[n],b[n],i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j] && a[i]+b[j]>b[i])
                    b[i]=a[i]+b[j];
            }
        }
        int max=a[0];
        for(i=1;i<n;i++)
            if(b[i]>max)
                max=b[i];
        cout<<max<<endl;
    }
	return 0;
}

