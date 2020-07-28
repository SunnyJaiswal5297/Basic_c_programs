#include <bits/stdc++.h>
using namespace std;

void stockBuySell(int *, int);

int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        stockBuySell(price, n);
    }
    return 0;
}
void stockBuySell(int price[], int n) 
{
    int prev=0,flag=0,profit_flag=0;
    for(int i=1;i<n;i++)
    {
        if(price[i]>price[i-1])
        {
            if(flag==0)
                prev=i-1;
            flag=1;
        }
        if(price[i]<price[i-1] && flag==1)
        {
            cout<<"("<<prev<<" "<<i-1<<") ";
            flag=0;
            profit_flag=1;
        }
        if(i==n-1 && flag==1)
        {
            cout<<"("<<prev<<" "<<i<<")";
            profit_flag=1;
        }
    }
    if(profit_flag==0)
        cout<<"No profit";
    cout<<endl;    
}