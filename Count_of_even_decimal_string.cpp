#include<iostream>
using namespace std;

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
        cin>>str;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
                count+=n-i;
        }
        cout<<count<<endl;
    }
    return 0;
}