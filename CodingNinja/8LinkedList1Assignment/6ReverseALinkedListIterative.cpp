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


Node *ReverseLL(Node *head)
{
	Node* prevNode = NULL;

	while(head!=NULL)
	{
		//get Next Node
        Node* nextNode = head ->next;

		// attaching backwards
		head->next = prevNode;

		// shifting previous Node ,Head to right by one  [ prevNode , Head, NextNode]
		prevNode = head;
		head = nextNode;
	}
	return prevNode;
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