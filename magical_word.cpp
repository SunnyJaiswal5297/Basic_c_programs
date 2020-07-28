#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}
int next_prime(int n)
{
    if(n>=65 && n<=90)
    {
        for(int i=n+1;i<=90;i++)
            if(is_prime(i))
                return i;
    }
    else if(n>=97 && n<122)
    {
        for(int i=n+1;i<=122;i++)
            if(is_prime(i))
                return i;
    }
}
int prev_prime(int n)
{
    if(n>=65 && n<=90)
    {
        for(int i=n-1;i>=65;i--)
            if(is_prime(i))
                return i;
    }
    else if(n>=97 && n<122)
    {
        for(int i=n-1;i>=97;i--)
            if(is_prime(i))
                return i;
    }
}
int main() 
{
	int t;
	cin>>t;
    map<char,int> mp;
	while(t--)
	{
		int n;
		cin>>n;
		string str,res="";
		cin>>str;
		for(int i=0;i<str.length();i++)
        {
            if(is_prime(int(str[i])))
                res+=str[i];
            else
            {
                int next=next_prime(int(str[i]));
                int prev=prev_prime(int(str[i]));
                cout<<next<<" "<<prev<<" "<<str[i]<<" "<<int(str[i])<<endl;
                if(next-int(str[i])==int(str[i])-prev)
                    if((prev>=65 && prev>=90) || (prev>=97 && prev<=122))
                        res+=char(prev);
                    else
                        res+=char(next);
                else if(abs(next-int(str[i]))>abs(prev-int(str[i])))
                    if((prev>=65 && prev<=90) || (prev>=97 && prev<=122))
                        res+=char(prev);
                    else
                        res+=char(next);
                else if(abs(next-int(str[i]))<abs(prev-int(str[i])))
                    if((next>=65 && next<=90) || (next>=97 && next<=122))
                        res+=char(next);
                    else
                        res+=char(prev);
            }
        }
        cout<<res<<endl;
	}
	return 0;
}
