#include <iostream>
using namespace std;
void findEquilibrium(int [], int );
 
int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	return 0;
}
int findEquilibrium(int a[], int n)
{
    int left[n],right[n],i;
    int sum=0;
    left[i]=0;
    for(i=1;i<n;i++)
    {
        left[i]=a[i-1]+sum;
        sum=left[i];
    }
    right[n-1]=0,sum=0;
    for (i=n-2;i>=0;i--)
    {
        right[i]=a[i+1]+sum;
        sum=right[i];
    }
    int f=0;
    for(i=0;i<n;i++)
    {
        if(left[i]==right[i])
        {
            f=1;
            return i;
        }
    }
    if(f==0)
        return -1;
}