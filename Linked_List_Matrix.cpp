// { Driver Code Starts
#include <bits/stdc++.h>
#define MAX 20
using namespace std;

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};

void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		cout<<"\n";
		Dp = Dp->down;
	}
}

Node* constructLinkedMatrix(int mat[MAX][MAX], int n);

// driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[MAX][MAX];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
        Node* head = constructLinkedMatrix(mat, n);
        if(!head)cout<<"-1";
	    else display(head);
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends


/*structure of the node of the linked list is as

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};
*/
// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    // code here
    Node *head=NULL,*right_prev=NULL,*down_prev=NULL,*temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            Node *n=new Node(mat[i][j]);
            if(head==NULL)
                head=right_prev=down_prev=n;
            else
            {
                if(j==0)
                    temp=right_prev=n;
                //updating right pointer of previous node
                if(j>0)
                {
                    right_prev->right=n;
                    right_prev=n;
                }
                //updating down pointer of upper node
                if(i>0)
                {
                    down_prev->down=n;
                    down_prev=down_prev->right;
                }
            }
        }
        if(down_prev==NULL)
            down_prev=temp;
    }
    return head;
}
