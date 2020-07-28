#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> , int );
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {        
        int n,target;
        cin >> n >> target;
        vector<int> vec(n);
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> vec[i];
        cout << threeSumClosest(vec, target) << "\n";
    }
}
int threeSumClosest(vector<int> arr, int target) 
{
    sort(arr.begin(),arr.end());
    int curr_sum;
    for(int i=0;i<arr.size()-2;i++)
    {
        int l=i+1;
        int r=arr.size()-1;
        int diff=99999;
        while(l<r)
        {
            int closest=arr[i]+arr[l]+arr[r];
            if(closest==target)
                return closest;
            else if(closest<target)
                l++;
            else if(closest>target)
                r--;
            if(abs(closest-target)<=diff)
            {
                if(abs(closest-target)==diff)
                {
                    if(closest>curr_sum)
                        closest=curr_sum;
                }
                diff=abs(closest-target);
                curr_sum=closest;
            }
        }
    }
    return curr_sum;    
}