// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool pairWiseConsecutive(stack<int> s);

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
	    /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
	return 0;
}

bool pairWiseConsecutive(stack<int> s)
{
    //Code here
    stack<int> stk=s;
    if(stk.size()%2!=0)
        stk.pop();
    while(!stk.empty())
    {
        int x=stk.top();
        stk.pop();
        if(stk.top()==x+1 || stk.top()==x-1)
        {
            stk.pop();
            continue;
        }
        else
            return false;
    }
    return true;
}