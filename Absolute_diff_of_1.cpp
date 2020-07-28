#include<iostream>
using namespace std;
bool check_for_digit(int num)
{
    string str=to_string(num);
    int f=0;
    if(str.length()==1)
        return false;
    for(int i=0;i<str.length()-1;i++)
    {
        if(abs((str[i]-'0')-(str[i+1]-'0'))==1)
            continue;
        else
            return false;
    }
    return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long int n,k;
        cin>>n>>k;
        long long int a[n],i,num;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(check_for_digit(a[i]) && a[i]<k)
                cout<<a[i]<<" ";
        }
    }
	return 0;
}