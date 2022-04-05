#include <iostream>
using namespace std;

//Coding Ninja Way || version 2

/* 
Time Complexity = O(n)
Space Complexity = O(1)
*/

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


Node *removeDuplicates(Node *head)
{ 
	if(head==NULL) // for empty LL
	{
		return head;
	}

	Node* currHead = head; //for traversing

	while(currHead->next !=NULL)
	{
		if(currHead -> data == currHead->next->data)
		{
			currHead ->next = currHead->next->next; 
			//if duplicate skip this node and connect to later one
		}
		else
		{
			// if unique move traverse
			currHead = currHead ->next;
		}
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
		head = removeDuplicates(head);
		print(head);
	}
	return 0;
}