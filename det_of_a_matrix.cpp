// { Driver Code Starts
// C++ program to find Deteminant of a matrix
#include <bits/stdc++.h>
using namespace std;
#define N 105

int det=0;
int determinantOfMatrix( int mat[N][N], int n)
{   
    int det = 0;
    int submatrix[N][N];
    if (n == 2)
        return ((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    else 
    {
        for (int x = 0; x < n; x++) 
        {
            int subi = 0; 
            for (int i = 1; i < n; i++) 
            {
               int subj = 0;
               for (int j = 0; j < n; j++) 
               {
                  if (j == x)
                  continue;
                  submatrix[subi][subj] = mat[i][j];
                  subj++;
               }
               subi++;
            }
            det = det + (pow(-1, x) * mat[0][x] * determinantOfMatrix(submatrix, n - 1 ));
        }
    }
    return det;
}

int main()
{
	  int t;
	cin>>t;
	while(t--)
	{
	  int no;
	cin>>no;
	  int mat[N][N];
	for(  int i=0;i<no;i++)
	{
	    for(  int j=0;j<no;j++)
	    {
	        cin>>mat[i][j];
	    }
	}
	printf("%d",determinantOfMatrix(mat, no));
	printf("\n");
	}
	return 0;
}