#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(string str)
{
    if(str.length()==1)
        return stoi(str);
    else
    {
        int sum=0;
        for(int i=0;i<str.length();i++)
        {
            sum+=str[i]-'0';
        }
        return sum;
    }
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>str;
            int count=sum_of_digits(str);
            s.insert(count);
        }
        cout<<s.size()<<"\n";  
    }
    return 0;
}