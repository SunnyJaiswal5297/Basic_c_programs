#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,m;
        cin>>n>>m;
        int i=0;
        while(1)
        {
            i=i%n;
            if(m>0 && m>i)
                m=m-(i+1);
            else
                break;
            cout<<m<<" "<<i<<endl;
            i++;
        }
        cout<<m<<endl;
    }
	return 0;
}