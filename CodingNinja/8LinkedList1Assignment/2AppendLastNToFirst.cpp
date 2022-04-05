#include <iostream>
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

int length(Node* head)
{
    Node* temp = head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}



Node *appendLastNToFirst(Node *head, int n)
{
    // last n nodes

    // traverse till n-1 th node

    if(head==NULL || n==0)
    {
        return head;
    }
    Node* temp = head;
    int oLen = length(head);
    int counter=0; // 0 to oLen-1 || index = olen -1 - n

    Node* head1 = head;
    Node* head2 = NULL;
    Node* prevNode = NULL;
    while(temp!=NULL && counter<=(oLen-1-n)) //we will get head of smaller LL
    {
        prevNode = temp;
        temp=temp->next;
        counter++;
    }

    head2 =prevNode ->next; // copied head 2 
    prevNode ->next = NULL; //ended it

    //Now we will add smaller LL2 in start

    head=head2;
    temp = head2;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    //temp will have second last node
    
    temp->next = head1; //attaching last node of LL2 to head of LL1

    return head;
}


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}