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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int f=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<a[i];
        else
            cout<<a[n-1];
        cout<<endl;
    }
	return 0;
}
