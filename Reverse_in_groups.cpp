#include <bits/stdc++.h>
using namespace std;

vector<long long> reverseInGroups(vector<long long> mv, int n, int k)
{
    int l,r;
    for(int i=0;i<n;i=i+k)
    {
        l=i;
        if(l+k-1<n-1)
            r=l+k-1;
        else
            r=n-1;
        while(l<r)
        {
            swap(mv[l],mv[r]);
            l++;
            r--;
        }   
    }
    return mv;
}

int main() {
    
    int t; 
    cin >> t; 

    while(t--)
    { 
        int n;
        cin >> n; 
        
        vector<long long> mv; 
        
        int k;
        cin >> k;  

        for(long long i =0;i<n;i++){
            long long x;
            cin >> x; 

            mv.push_back(x); //push the element into vector
        }
        
        mv = reverseInGroups(mv, n, k);
        
        for(long long i =0;i<n;i++){
            cout << mv[i] << " "; //Just print the vector
        }

        cout << endl;

    }

}