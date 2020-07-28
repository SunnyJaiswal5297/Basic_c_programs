#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    return (n==1 || n==0 )?1:n*fact(n-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int len=n+2;
        int arr[len];
        for(i=0;i<len;i++)
            cin>>arr[i];
        for (i = 0; i < len; i++) 
        { 
            if (arr[abs(arr[i])] >= 0) 
                arr[abs(arr[i])] = -arr[abs(arr[i])]; 
            else
                cout << abs(arr[i]) << " "; 
        }
    }
    return 0;
}