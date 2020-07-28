// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

pair<int,int> Max_Sum(int arr[], int n, int k)
{
    int  p = n;  
    sort(arr, arr + n); 
    for (int i = 0; i < n; i++) 
    {  
        if (arr[i] >= k) { 
            p = i; 
            break; 
        } 
    } 
    int maxsum = 0, a, b; 
    for (int i = 0; i < p; i++)  
    { 
        for (int j = i + 1; j < p; j++)  
        { 
            if (arr[i] + arr[j] < k and arr[i] + arr[j] > maxsum) 
            { 
                maxsum = arr[i] + arr[j]; 
                  
                a = arr[i]; 
                b = arr[j]; 
            } 
        } 
    } 
    return make_pair(a,b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+5];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        pair<int,int> p = Max_Sum(arr, n, k);
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}