#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;  

int max_Books(int[], int, int);     
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n,k;
  	cin>>n>>k;
  	int ar[n];
  	for(int i=0;i<n;i++)
  	{
  		cin>>ar[i];
  	}
        	cout<<max_Books(ar,n,k)<<endl;
        
  }    
  return 0;
}

int max_Books(int a[], int n, int k)
{
    int res=0,curr=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k)
            curr+=a[i];
        else
        {
            res=max(res,curr);
            curr=0;
        }
    }    
    return res;
}