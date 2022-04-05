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


Node *removeDuplicates(Node *head)
{
	// To solve this question we create a new Linked list 
	// and only add those elements which are unique

	Node* temp = head; // for traversing orignal LL

    Node* head2 =NULL; // for second LL without duplicates
    Node* tail2=NULL;

    while(temp!=NULL) // traversing orignal LL
    {

		// for last element case  eg: 122233 in this case you can't compare temp and temp->next becuase 
		// temp->next will be null so we just add that node, because if duplicate was present it wouldn't have been added

		if(temp->next==NULL) // last element case
		{
			Node *newNode = new Node(temp->data);
			tail2 -> next = newNode;
			tail2 = newNode;
			return head2;
		}
		else // for all other cases of comparing 2 consecutive values
		{
			if(temp->data != (temp->next)->data) // compare 2 nodes
			{
				// unique element
				//add to LL 2 
				// creates a new node 
				Node *newNode = new Node(temp->data);

				if(head2==NULL) // when second LL is empty
				{
					head2=newNode;
					tail2 = newNode;
				}
				else // when second LL has some elements
				{
				
				//copy to LL2
				tail2 -> next = newNode;
				tail2 = newNode;
				}
			}

		}
		temp=temp->next; // moving to next node in main LL 1
    }  
	return head2; //returning second Linked List
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