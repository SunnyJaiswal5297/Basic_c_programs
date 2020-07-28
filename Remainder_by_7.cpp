#include<iostream>
using namespace std;
int remainderWith7(string );

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
string n;
cin>>n;

cout<<remainderWith7(n)<<endl;

}
	return 0;
}// } Driver Code Ends
/*You are required to complete this method */
int remainderWith7(string str)
{
    if(str.length()==1)
        return stoi(str)%7;
    while (str.length()>1)
    {
        string temp=str.substr(0,2);
        int rem=stoi(temp)%7;
        str.erase(0,2);
        str=to_string(rem)+str;
        cout<<str<<endl;
    }
    return stoi(str)%7;
}