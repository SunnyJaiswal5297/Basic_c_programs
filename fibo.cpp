#include<iostream>
using namespace std;

void fibo(int n)
{
	int first=0,second=1,i,res;
	if(n<0)
	{
		cout<<"Error"<<endl;
	}
	else if(n==0)
	{
		cout<<"Error(zero elements)"<<endl;
	}
	else if(n==1)
	{
		cout<<first<<endl;
	}
	else if(n==2)
	{
		cout<<first<<" "<<second<<endl;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(i==0)
				cout<<first<<" ";
			else if(i==1)
				cout<<second<<" ";
			else
			{
				res=first+second;
				first=second;
				second=res;
				cout<<res<<" ";
			}
		}	
	}
}
int main()
{
	int n;
	cout<<"Enter the no. of terms in fibonacci series"<<endl;
	cin>>n;
	fibo(n);
}
