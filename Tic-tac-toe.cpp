#include<iostream>
#include<stdlib.h>
using namespace std;

char a[3][3];
void display()
{
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
}
void get_player_move()
{
	int x,y;
	cout<<"Enter your coordinates:\n";
	cin>>x>>y;
	x--;y--;
	if(a[x][y]=='X' || a[x][y]=='O')  //not occupied
		get_player_move();
	else if(x>3 || y>3)
	{
		cout<<"Error indexes(Enter between 1 to 3:)\n";
		get_player_move();
	}
	else
		a[x][y]='X';
}
void get_computer_move()
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(a[i][j]=='_')
			{
				a[i][j]='O';
				return ;
			}
}
int check()
{
	int i,j;
	for(i=0;i<3;i++)
		if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][0]!='_')
			return 1;
	for(i=0;i<3;i++)
		if(a[0][i]==a[1][i] && a[1][i]==a[2][i] && a[0][i]!='_')
			return 1;
	if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[0][0]!='_')
		return 1;
	else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[0][2]!='_')
		return 1;
	else 
		return 0;
}
bool empty_check()
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(a[i][j]=='_')
				return 1;
}
int main()
{
	int i,j,res;
	cout<<"Empty spaces '_':\n";
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			a[i][j]='_';
	do
	{
		display();
		get_player_move();
		display();
		if(check()) //check for player
		{
			cout<<"Player is Winner!!!"<<endl;
			exit(1);
		}
		get_computer_move();
		display();
		if(check()) //check for computer
		{
			cout<<"Computer is Winner!!!"<<endl;
			exit(1);
		}	
	}while(empty_check());
}
