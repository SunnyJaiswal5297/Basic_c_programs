// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;

struct Node* segregate(struct Node *head);

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        struct Node *newHead = segregate(start);
        printList(newHead);
    }

    return 0;
}

Node* segregate(Node *head) 
{
    int count=1;
    Node *start=head,*end=head,*tmp=head,*prev=head;
    while(end->next!=NULL)
    {
        end=end->next;
        count++;
    }
    while(count--)
    {
        if(tmp->data==1)
        {
            prev=tmp;
            tmp=tmp->next;
        }
        else if(tmp->data==2)
        {
            if(tmp==start)
            {
                Node *d=tmp;
                tmp=tmp->next;
                start=prev=tmp;
                end->next=d;
                end=d;
            }
            else
            {
                Node *d=tmp;
                prev->next=tmp->next;
                if(prev->next==NULL)
                    end=prev;
                tmp=tmp->next;
                end->next=d;
                end=d;
            }
        }
        else
        {
            if(tmp==start)
                tmp=tmp->next;
            else
            {
                Node *d=tmp;
                prev->next=tmp->next;
                if(prev->next==NULL)
                    end=prev;
                tmp=tmp->next;  
                d->next=start;
                start=d;
            }
        }
        end->next=NULL;
        //printList(start);
    }
    end->next=NULL;
    return start;
}
/*
8
1 2 2 1 2 0 2 2
*/
