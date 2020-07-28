#include <iostream>
using namespace std;

int main() 
{
	int T,N,D,i;
	cin>>T;
	while(T!=0)
	{
	    cin>>N>>D;
	    int a[N],temp=0;
	    for(i=0;i<N;i++)
	        cin>>a[i];
		while(D!=0)
		{
			temp=a[0];
			for(i=0;i<N-1;i++)
	    	{
	        	a[i]=a[i+1];
	    	}
			a[N-1]=temp;
			D--;
		}
        for(i=0;i<N;i++)
	        cout<<a[i]<<" ";
        T--;
	}
	return 0;
}