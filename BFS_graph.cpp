#include<iostream>
using namespace std;

int n;
void display(int a[][n],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main()
{
	int i,j,temp;
	cout<<"Enter the no. of nodes present in graph:\n";
	cin>>n;
	int a[n][n],visited[n];
	for(i=0;i<n;i++)
		visited[i]=0;
	cout<<"if two nodes are connected->Press '1' otherwise '0'\n";
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			cout<<"if node "<<i<<" and "<<j<<" are connected?\n";
			cin>>temp;
			if(temp==1)
				a[i][j]=a[j][i]=1;
			else
				a[i][j]=a[j][i]=0;
		}
	display(a,n);
	return 0;
}
