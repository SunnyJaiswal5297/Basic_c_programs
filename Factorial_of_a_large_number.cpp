#include<bits/stdc++.h>
using namespace std;
#define MAX 500

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int num;
        cin>>num;
        int arr[MAX],i;
        arr[0]=1;
        int size=1,carry=0;
        for(i=2;i<=num;i++)
        {
            carry=0;
            for(int j=0;j<size;j++)
            {
                int p=arr[j]*i+carry;
                arr[j]=p%10;
                carry=p/10;
            }
            while(carry!=0)
            {
                arr[size]=carry%10;
                carry/=10;
                size++;
            }
        }
        for(i=size-1;i>=0;i--)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}