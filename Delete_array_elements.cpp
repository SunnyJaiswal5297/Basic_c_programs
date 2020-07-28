#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    cin>>k;
        stack<int> s; 
        s.push(arr[0]); 
        int count = 0;
        for (int i=1; i<n; i++) 
        { 
            while (!s.empty() && s.top() < arr[i]  && count < k)
            {                                      
                s.pop(); 
                count++; 
            }
            s.push(arr[i]); 
        }  
        int m = s.size(); 
        vector<int> v(m);
        while (!s.empty()) 
        { 
            v[--m] = s.top(); 
            s.pop(); 
        } 
        for (auto x : v) 
            cout << x << " "; 
        cout << endl; 
    }
	return 0;
}