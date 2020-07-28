// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long getSmallestDivNum(long long n);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<getSmallestDivNum(n)<<endl;
	}
	return 0;
	
}// } Driver Code Ends
// int array2D[][] = {1,2,3,4,5,6,7,8};

/*You are required to complete this method */
long long gcd(long long int a,long long int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
long long getSmallestDivNum(long long n)
{
    long long res=1;
    for(int i=1;i<=n;i++)
    {
        res=(res*i)/gcd(res,i);
    }
    return res;
}
