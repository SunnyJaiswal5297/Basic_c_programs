// { Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}// } Driver Code Ends
/*Complete the function given below*/
int num(int a[], int n, int k)
{
    int i;
    string str={};
    for(i=0;i<n;i++)
        str+=to_string(a[i]);
    int count=0;
    for(i=0;i<str.length();i++)
        if(str[i]-'0'==k)
            count++;
    return count;
}