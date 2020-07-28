// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_set>
using namespace std; 
int countUnvisited(int n, int m) ;

 // } Driver Code Ends


//User function Template for C++

int countUnvisited(int n, int m) 
{
    //using frobenium number
    int x = (m*n)-m-n,count=0; 
    queue<int> q;
    q.push(x);
    while(q.size()>0)
    {
        int index = q.front();
        q.pop();
        count++;
        if(index-m>0)
            q.push(index-m);
        if(index-n>0)
            q.push(index-n);
    }
    return count;
}

// { Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout << countUnvisited(n, m)<<endl; 
	}
	return 0; 
} 



  // } Driver Code Ends