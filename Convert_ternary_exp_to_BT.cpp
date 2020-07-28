// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;
	
	Node(char x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

void preorder(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
Node *convertExpression(string str,int i);
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		Node *root=convertExpression(str,0);
		preorder(root);
		cout<<endl;
	}
}// } Driver Code Ends


/*Complete the function below
Node is as follows
struct Node{
	char data;
	Node *left,*right;
};
*/
Node *convertExpression(string str,int i)
{
    Node *root=NULL,*curr;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            Node *new_node=new Node(str[i]);
            if(root==NULL)
                curr=root=new_node;
            else
            {
                curr->left=new_node;
                curr=new_node;
            }
        }
    }
    return root;
}