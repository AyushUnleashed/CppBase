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


Node* ReverseLL(Node *head)
{
	Node *head2 = NULL, *tail2 = NULL;
    if(head==NULL)
    {
		Node* temp =head;
		head = head2;
		delete temp;
        return head;
    }
    ReverseLL(head->next);
	//just put this one inside other LL

   //cout<<head->data<<" ";
	Node *newnode = new Node(head->data);
	if (head2 == NULL)
	{
		head2 = newnode;
		tail2 = newnode;
	}
	else
	{
		tail2->next = newnode;
		tail2 = newnode;
	}

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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = ReverseLL(head);
		print(head);
		cout << endl;
	}
	return 0;
}