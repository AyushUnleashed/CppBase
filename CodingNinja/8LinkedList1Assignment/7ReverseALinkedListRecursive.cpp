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


// Recursive Solution
Node *ReverseLL(Node *head)
{	
	if(head==NULL || head->next ==NULL)
	{
		//for 0  or 1 element return itself
		return head;
	}

	Node* orignalHeadNextElement = head->next;

	//get head2; || Reversing Smaller LinkedList
	Node* head2 = ReverseLL(head->next);

	//after reverse of Small LinkedList we need to reverse this part also.

	// orignalHeadNextElement is last element of smaller Reversed LinkedList
	// we need to attach orignal head to last element of smaller Reversed LinkedList

	orignalHeadNextElement -> next = head;

	// head should point to null , becuase it is last element, after reverse

	head ->next = NULL;

	return head2;
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