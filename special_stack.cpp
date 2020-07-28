// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}// } Driver Code Ends


/*Complete the function(s) below*/
void push(int a)
{
    s.push(a);
}

bool isFull(int n)
{
    //add code here.
    if(s.size()==n)
        return true;
    return false;
}

bool isEmpty()
{
    //add code here.
    return s.size()==0;
}

int pop()
{
    //add code here.
    int num=s.top();
    s.pop();
    return num;
}

int getMin()
{
   //add code here.
    stack<int > temp;
    long int min=99999;
    while(!s.empty())
    {
        long long int ele=s.top();
        s.pop();
        if(ele<min)
            min=ele;
        temp.push(ele);
    }
    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
    return min;
}