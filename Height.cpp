#include<iostream>
using namespace std;

struct Height
{
    int feet;
    int inches;
};
int find_max(Height h[],int n)
{
    int min=0,i,temp;
    for(i=0;i<n;i++)
    {
        temp=(h[i].feet*12)+h[i].inches;
        if(temp>min)
        {
            min=temp;
        }
    }
    return min;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,res,i;
        cin>>n;
        Height h[n];
        for(i=0;i<n;i++)
            cin>>h[i].feet>>h[i].inches;
        res=find_max(h,n);
        cout<<res;
        t--;
    }
    return 0;
}