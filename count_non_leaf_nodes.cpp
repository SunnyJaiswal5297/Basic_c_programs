// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

int countNonLeafNodes(Node* root);

/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     cout<<countNonLeafNodes(root)<<endl;
  }
  return 0;
}

int countNonLeafNodes(Node* root)
{
    if(root==NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int count=0;
    while(!q.empty())
    {
        Node *curr=q.front();
        q.pop();
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        if(curr->left!=NULL || curr->right!=NULL)
            count++;
    }
    return count;
}