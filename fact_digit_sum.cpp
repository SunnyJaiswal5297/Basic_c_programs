#include<iostream>
using namespace std;

long long int fact[10]={1,1,2,6,24,120,720,5040,40320,362880};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int sum=0,k=9,index=9;
        int curr=n;
        string str={};
        while(curr)
        {
            
            if(curr<fact[index])
            {
                index--;
            }
            else
            {
                sum+=fact[index];
                cout<<index<<" ";
                str=str+to_string(index);
                curr=n-sum;
            }
        }
        for(int i=str.length()-1;i>=0;i--)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}