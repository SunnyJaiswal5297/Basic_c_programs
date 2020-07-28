#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        string a,b;
        cin>>a;
        cin>>b;
        int i=0,j=0,f=0;
        while(i<a.length() || j<b.length())
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
            if(i==a.length() && j<=b.length())
            {
                f=1;
                break;
            }
        }
        cout<<f<<endl;
    }
	return 0;
}