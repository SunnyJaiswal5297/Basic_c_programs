#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string a;
	    cin>>a;
	    int sum=0;
	    for(int i=0;i<a.length();i++)
	        if(a[i]>='0' && a[i]<='9')
	            sum+=a[i]-'0';
	    sort(a.begin(),a.end());
	    for(int i=0;i<a.length();i++)
            if(a[i]>='A' && a[i]<='Z')
                cout<<a[i];
	    cout<<sum<<endl;
    }
	return 0;
}