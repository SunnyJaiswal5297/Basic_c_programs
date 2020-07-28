#include<bits/stdc++.h>
using namespace std;
char check_arr[]={'!','#','$','%','&','*','@','^','~'};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,i;
        cin>>n;
        map<char,int> m;
        char c;
        for(i=0;i<n;i++)
        {
            cin>>c;
            m[c]++;
        }
        for(i=0;i<n;i++)
        {
            cin>>c;
            m[c]++;
        }
        for(auto x:m)
            cout<<x.first<<" ";
        cout<<endl;
        for(auto x:m)
            cout<<x.first<<" ";
        cout<<endl;

    }
	return 0;
}