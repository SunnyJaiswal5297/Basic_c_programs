// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
int repeatedStringMatch(string A, string B);


 // } Driver Code Ends


//User function Template for C++
int repeatedStringMatch(string A, string B)
{
    int i = 0;
    int j = 0;
 
    int result = 0;
    int k = 0;
 
    while (j < B.length()) 
    {
        if (A[i] == B[j]) 
        {
            i++;
            j++;
 
            if (i == A.length()) 
            {
                i = 0;
                result++;
            }
        } 
        else 
        {
            k++;
            if (k == A.length()) 
            {
                return -1;
            }
            i = k;
            j = 0;
            result = 0;
        }
    }
 
    if (i > 0) 
    {
        result++;
    }
 
    return result;
}
/*abcd
cdabcdab*/

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        cout<<repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends