#include <iostream>
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
        int carry=0;
        int i =num.length()-1;

        if (num[i]>'5')
            carry=1;
        else
            carry=0;
        num[i--]='0';
        while(carry==1 && i>=0)
        {
            if(num[i]=='9'&& carry==1)
            {
                num[i]='0';
                carry=1;
            }   
            else
            {
                num[i]++;
                carry=0;
            }
        i--;
        }
        if(carry==1)
        {
            cout<<'1';
        }
        cout<<num<<endl;
    }
    return 0;
}