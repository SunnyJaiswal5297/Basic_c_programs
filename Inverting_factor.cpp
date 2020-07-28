#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            string str=to_string(a[i]);
            reverse(str.begin(),str.end());
            a[i]=stoi(str);
        }
        sort(a,a+n);
        int min=a[1]-a[0];
        for(i=1;i<n-1;i++)
        {
            if(a[i+1]-a[i]<min)
                min=a[i+1]-a[i];
        }
        cout<<min<<"\n";
    }
	return 0;
}