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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    Node* head3 = NULL; Node* tail3 =NULL;

    if(head1==NULL && head2==NULL)
    {
        return NULL;
    }
    else if(head1==NULL)
    {
        return head2;
    }
    else if(head2==NULL)
    {
        return head1;
    }

    while(head1!=NULL && head2!=NULL)
    {
        Node* newNode;
        if(head1->data >= head2->data)
        {
            newNode = head2;
            head2 = head2->next;
        }
        else
        {
            newNode =head1;
            head1=head1->next;
        }

        if(head3 == NULL)
        {
            head3=newNode;
            tail3=newNode;
        }
        else
        {
            tail3->next= newNode;
            tail3 = tail3->next;
        }
    }

    while(head1!=NULL)
    {
        tail3->next = head1;
        head1=head1->next;
        tail3 = tail3->next;
    }

    while(head2!=NULL)
    {
        tail3->next = head2;
        head2=head2->next;
        tail3 = tail3->next;
    }
    
    return head3;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}

