#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        cin>>str;
        int len=str.length();
        char ch;
        cin>>ch;
        int count;
        cin>>count;
        int c=0,i;
        for(i=0;i<len;i++)
        {
            if(str[i]==ch)
                c++;
            if(c==count)
                break;
        }
        if(c==0 || i==len-1)
            cout<<"Empty string\n";
        else
        {
            for(int k=i+1;k<len;k++)
            cout<<str[k];
            cout<<endl;
        }
    }
    string str;
    
    return 0;
}