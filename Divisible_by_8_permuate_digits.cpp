#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        int f=0;
        do
        {
            cout<<str<<endl;
            long long int num=stoi(str);
            if(num%8==0)
            {
                f=1;
                cout<<"YES\n";
                break;
            }
        }while(next_permutation(str.begin(),str.end()));
        if(f==0)
            cout<<"NO\n";
    }
	return 0;
}