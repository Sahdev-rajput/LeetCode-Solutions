//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code 
        set<int> s;
        set<int>::iterator itr;
        struct Node *track=head1;
        while(track->next!=NULL)
        {
           s.insert(track->data);
           track=track->next;
        }
        track->next=head2;
        while(track)
        {
         s.insert(track->data);
         track=track->next;
        }
        struct Node *root=NULL;
        struct Node *temp=NULL;
        for(itr=s.begin();itr!=s.end();itr++)
        {
          if(root==NULL)
          {
         root=(struct Node*)malloc(sizeof(struct Node));
        root->data=*itr;
        root->next=NULL;
        temp=root;
          }
          else
          {
          struct Node* newone=(struct Node*)malloc(sizeof(struct Node));
        newone->data=*itr;
        newone->next=NULL;
        temp->next=newone;
        temp=newone;}
        }
        return root;
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends