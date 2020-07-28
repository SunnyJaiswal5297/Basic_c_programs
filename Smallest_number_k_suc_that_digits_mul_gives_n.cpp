// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

string smallestK(long long n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long n;
        cin>>n;
        cout<< smallestK(n) << endl;
	}
	return 1;
}
// } Driver Code Ends


//User function Template for C++

string smallestK(long long n)
{
    if(n>=1 && n<=9)
        return to_string(n);
    stack<int> digits;
    long long unsigned int i=9,num=0;
    for(i=9;i>=2 && n>1;i--)
    {
        while(n%i==0)
        {
            digits.push(i);
            n=n/i;
        }
    }
    if(n!=1)
        return to_string(-1);
    string res={};
    while(!digits.empty())
    {
        res=res+to_string(digits.top());
        digits.pop();
    }
    return res;   
}
