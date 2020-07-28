#include<bits/stdc++.h>
using namespace std;

stack<int> deleteMid(stack<int>s,int sizeOfStack,int current);

int main() {
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);
            
            
        }
        if(sizeOfStack==1)
        {
            cout<<myStack.top();
        }
        else
        {
        
            stack<int> modified=deleteMid(myStack,myStack.size(),0);
            
            
            while(!modified.empty())
            {
                cout<<modified.top()<<" ";
                modified.pop();
            }
        }
        cout<<endl;
        
    }   
	return 0;
}
stack<int> deleteMid(stack<int> s,int size,int current)
{
    int mid=ceil(size/2.0);
    int count=1;
    vector<int> vec;
    while(!s.empty())
    {
        if(count!=mid)
            vec.push_back(s.top());
        s.pop();
        count++;
    }
    for(auto it=vec.end()-1;it>=vec.begin();--it)
        s.push(*it);
    return s;
}

