#include <bits/stdc++.h>
#define loop(i,n) for(int i=0; i<n; i++)
#define ull unsigned long long int
#define ll long long int
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ar[26] = {0};
        int moves = 1;
        int minFreq = INT_MAX,maxFreq = INT_MIN;
        int n = s.length();
        
        // stores freq 
        loop(i,n)
        {
            ar[s[i]-'a']++;
        }
        
        // get max and min
        loop(i,26)
        {
            if(ar[i]!=0 && ar[i]<minFreq)
                minFreq = ar[i];
            if(ar[i]!=0 && ar[i]>maxFreq)
                maxFreq = ar[i];
        }
        
        int num1 = 0;
        int num2 = 0;
        // find elements that are greater than num and by how much ( stored as sum)
        loop(i,26)
        {
            if(ar[i]!=0 && ar[i] > minFreq)
                num1 += ar[i]-minFreq;
        }
        // find elements that are smaller than num and by how much ( stored as sum)
        
        loop(i,26)
        {
            if(ar[i]!=0 && ar[i] < maxFreq)
                num2 += ar[i];
        }
        if( num1<=1 || num2<=1 )
            cout<<"1\n";
        else
            cout<<"0\n";
        
    }
    return 0;
}