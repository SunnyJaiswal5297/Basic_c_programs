#include<iostream>
using namespace std;

long StepCount(long k, long m, long n)
{
	if(k == m)
		return 0;
	if(k > m)
	{
		long steps=(k-m)/2;
		if((k-m)%2 != 0)
			steps++;
		
		return steps;
	}
	// If m is divisible by n we need to equate k to the required number for multiplication
	else if(m%n == 0)
	{
		return 1 + StepCount(k, m/n, n);
	}
	else 
	{
		// Target for k to multiply with n to achieve m
		long target = (m/n + 1) * n;
		// Difference amount
		long increment = target-m;
		long steps=increment/2;
		if(increment%2 != 0)
			steps++;
 
		return steps + StepCount (k, target, n);
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,m,n,count=0;
        cin>>k>>m>>n;
        cout<<StepCount(k,m,n)<<endl;
    }
    return 0;
}