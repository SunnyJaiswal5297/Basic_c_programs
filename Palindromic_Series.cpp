#include<bits/stdc++.h>
using namespace std;

int count_sum(string str)
{
    int sum=0;
    for(int i=0;i<str.length();i++)
        sum+=str[i]-'0';
    return sum;
}
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        string str;
        cin>>str;
        int sum=count_sum(str),i,j;
        cout<<sum<<"\n";
        char ch[sum];
        for(i=0;i<sum;i++)
            ch[i]=str[i%str.length()];
        for(i=0;i<sum;i++)
            cout<<ch[i];
        cout<<endl;
        int f=0;
        for(i=0,j=sum-1;i<j;i++,j--)
        {
            if(ch[i]==ch[j])
                f=0;
            else
            {
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
	return 0;
}