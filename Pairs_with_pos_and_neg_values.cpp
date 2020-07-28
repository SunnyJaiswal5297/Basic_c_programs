#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
            cin>>arr[i];
        vector<int> v; 
        unordered_map<int, bool> cnt; 
        for (int i = 0; i < n; i++) 
        {  
            if (cnt[abs(arr[i])] == 0) 
                cnt[abs(arr[i])] = 1; 
            else 
            { 
                v.push_back(abs(arr[i])); 
                cnt[abs(arr[i])] = 0; 
            }    
        } 
        if (v.size() == 0) 
            cout<<"0\n";
        else
        { 
            sort(v.begin(), v.end()); 
            for (int i = 0; i < v.size(); i++) 
                cout << -v[i] << " " << v[i] << " ";
            cout<<endl;
        }
    }
    return 0;
}