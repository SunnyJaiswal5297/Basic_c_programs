#include<iostream>
using namespace std;
void pattern(int n)
{
    if(!(n>0))
    {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    n-=5;
    pattern(n);
    n+=5;
    cout<<n<<" ";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int num;
        cin>>num;
        pattern(num);
        cout<<endl;
    }
	return 0;
}