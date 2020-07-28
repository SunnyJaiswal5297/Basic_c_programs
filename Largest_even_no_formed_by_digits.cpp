#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        string num;
        cin>>num;
        sort(num.begin(),num.end(),greater<char>());
        int n=num.length(),f=0;
        if((num[n-1]-'0')%2==0)
            cout<<num<<endl;
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                int d=num[i]-'0';
                if(d%2==0)
                {
                    f=1;
                    swap(num[i],num[n-1]);
                    sort(num.begin(),num.end()-1,greater<char>());
                    cout<<num<<endl;
                    break;
                }
            }
            if(f==0)
                cout<<num<<endl;
        }
    }
	return 0;
}