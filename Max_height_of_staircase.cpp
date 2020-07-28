#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long int num,i=1;
        cin>>num;
        long long int sum=0;
        while(1)
        {
            if((i*(i+1)/2)<num)
                i++;
            else if((i*(i+1)/2)==num)
                break;
            else if((i*(i+1)/2)>num)
            {
                i--;
                break;
            }
        }
        cout<<i<<endl;
    }
	return 0;
}