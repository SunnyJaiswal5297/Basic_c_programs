#include<iostream>
using namespace std;

int main()
{
    string a,b,res;
    int carry=0;
    while(cin>>a>>b)
    {
        res="";carry=0;
        int i=a.length()-1,j=b.length()-1;
        while(i>=0 && j>=0)
        {
            int sum = (a[i]-'0')+(b[j]-'0')+carry;
            res = to_string(sum%10) + res;
            carry=sum/10;
            i--;
            j--;
        }
        while(i>=0)
        {
            int sum = a[i]-'0'+carry;
            res = to_string(sum%10) + res;
            carry=sum/10;
            i--;
        }
        while(j>=0)
        {
            int sum = b[j]-'0'+carry;
            res = to_string(sum%10) + res;
            carry=sum/10;
            j--;
        }
        if(carry)
            res=to_string(carry)+res;
        cout<<res<<endl;
    }
    return 0;
}