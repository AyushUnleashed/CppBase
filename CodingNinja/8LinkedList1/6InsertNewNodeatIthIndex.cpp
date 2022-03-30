#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* &head)
{   
    cout<<"\nLL is:\n";
    Node* temp=head;
    
    while (temp!=NULL)
    {
        cout<<"data:"<<temp->data<<" ";
        temp = temp -> next;
    }
}

//function inserts note at a given index
void insetNodeAtIth(Node* &head, int i,int data) //change in head here should reflect back to main code
{   
    Node *newNode = new Node(data); //creating new node

    // we will find (i-1)th node

    Node* temp=head; //for traversing
    Node* prevNode = NULL; // to hold (i-1)th node

    if(i==0) // if index==0 , insert at beginning || no prevNode
    {
        newNode->next = head; //point next of newNode to first node
        head=newNode; // change head 
        return;
    }

    int counter=0; //to track index 
    while(temp!=NULL) //till last node
    {
        if(counter==i-1) // if we reached last node
        {
            prevNode=temp; // storing i-1 th node in prevNode 
            break;
        }
        counter++; //updating counter 
        temp=temp->next; // going to next node
    }

    if(prevNode!=NULL) //if index is greater than length of LL. prevNode would still be null
    {
        newNode -> next = prevNode->next;  // draw on paper to understand
        prevNode->next = newNode;   
    }
    else{
        //no change , index out of limit of LL.
    }
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;    
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int index;
		cin >> index;
        int data;
        cin>>data;
        insetNodeAtIth(head,index,data);
		cout << endl;
        printLL(head);

	}
	return 0;
}