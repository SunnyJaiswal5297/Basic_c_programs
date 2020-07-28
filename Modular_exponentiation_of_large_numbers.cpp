#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int a,b,c;
        cin>>a>>b>>c;
        int rem=1;
        while(b--)
        {
            rem=(a*rem)%c;
        }
        cout<<rem<<endl;
    }
	return 0;
}