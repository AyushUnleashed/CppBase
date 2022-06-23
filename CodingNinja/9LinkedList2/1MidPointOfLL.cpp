#include <iostream>

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

using namespace std;

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

//mine
Node *midPoint(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    Node* slow;
    Node* fast;

    slow = head;
    fast = head->next;

    // jab tak fast end tak pohchega tab slow middle pe hoga.
    //change intitial condn to get desired node
    while(fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast = fast->next->next;
    }

    return slow;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
        else{cout<<"Mid is Null";}
		cout << endl;
	}
	return 0;
}