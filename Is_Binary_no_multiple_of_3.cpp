#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int i,even=0,odd=0;
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='1')
            {
                if(i%2==0)
                    even++;
                else
                    odd++;
            }
        }
        if((abs(even-odd)%3)==0)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
    return 0;
}