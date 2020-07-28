#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int k,max=0,temp;
        for(int i=2;i<num;i++)
        {
            temp=num%i;
            if(temp>max)
            {
                k=i;
                max=temp;
            }
        }
        cout<<k;
    }
    return 0;
}