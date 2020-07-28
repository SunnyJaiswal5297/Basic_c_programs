#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	int pos_of_A=0,pos_of_B=7;
	while(t--)
	{
		int n;
		cin>>n;
		if(abs(n-pos_of_A)<abs(n-pos_of_B))
        {
            cout<<"A"<<endl;
            pos_of_A=n;
        }
        else if(abs(n-pos_of_A)>abs(n-pos_of_B))
        {
            cout<<"B"<<endl;
            pos_of_B=n;
        }
        else if(abs(n-pos_of_A)==abs(n-pos_of_B))
        {
            if(pos_of_A<pos_of_B)
            {
                cout<<"A"<<endl;
                pos_of_A=n;
            }
            else
            {
                cout<<"B"<<endl;
                pos_of_B=n;
            }
        }
    }
	return 0;
}