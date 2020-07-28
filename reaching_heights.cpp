#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	       cin>>a[i];
	    sort(a,a+n,greater<int>());
        int f=1;
	    int i=0;
        int j=n-1; 
        if(a[i]==a[j]) 
            f=0;
	    if(f==0 && n!=1) 
            cout<<"Not Possible"<<"\n";
	    else
	    {
	        while(i<j)
	        {
	           cout<<a[i]<<" "<<a[j]<<" ";
	           i++;
               j--;
	        }
	        if(i==j)
                cout<<a[i]<<" ";
	        cout<<endl;
	   }
	}
	return 0;
}