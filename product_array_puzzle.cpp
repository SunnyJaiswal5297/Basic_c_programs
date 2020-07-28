#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&);
int main()
 {
    int t; 
    cin>>t;
    while(t--)
    {
        long long prod=1;
        int n;
        cin>>n;
        vector<long long int> arr(n),vec(n);   
        for(int i=0;i<n;i++)  
            cin>>arr[i];
        vec = productExceptSelf(arr);
        for(int i=0;i<n;i++)  
            cout << vec[i] << " ";
        cout<<endl;
    }
	return 0;
}
vector<long long int> productExceptSelf(vector<long long int>& nums) 
{
    long long int n=nums.size();
    long long int left[n],right[n];
    vector<long long int> prod;
    left[0]=1,right[n-1]=1;
    for(int i=1;i<n;i++)
    { 
        left[i]=left[i-1]*nums[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        right[i]=right[i+1]*nums[i+1];
    }
    long long int s;
    for(int i=0;i<n;i++)
    { 
        s=left[i]*right[i];
        prod.push_back(s);
    }
    return prod;
}