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
int length(Node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}

Node *deleteNode(Node *head, int pos)
{
    Node* temp = head;
    Node* prevNode =NULL;
    Node* dNode = NULL;

    int len = length(head);
    
    if(pos<0 || pos>=len)
    {
        //Do nothing
    }
	else if(pos==0)
	{
		Node* temp2 = head;
		head=head->next;
		delete temp2;
	}
    else
    {
        for(int counter=0; counter<pos && temp!=NULL;counter++ )
        {
            prevNode = temp;
            temp=temp->next;
        }
        
        dNode = prevNode->next;
		prevNode->next =dNode->next;
		delete dNode;
    }
	

	return head;
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
        head = deleteNode(head,index);
		cout << endl;
        printLL(head);

	}
	return 0;
}