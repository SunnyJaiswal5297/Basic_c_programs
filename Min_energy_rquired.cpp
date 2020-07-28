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
        int a[n],i,s=0,min=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
            if(s<=0 && abs(s)>min)
                min=abs(s)+1
        }
        cout<<min<<endl;
    }
	return 0;
}