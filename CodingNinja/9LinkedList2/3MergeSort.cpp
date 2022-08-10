#include<bits/stdc++.h>
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

// we take the smallest node and connect it to the third linked list
// first we traverse till one of them ends
// then we copy all elements of other LL to 3rd LL
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    Node* head3 = NULL; Node* tail3 =NULL;

    // Basic Checks 
    if(head1==NULL && head2==NULL) // if both empty
    {
        return NULL;
    }
    else if(head1==NULL) // if one empty, other is ans
    {
        return head2;
    }
    else if(head2==NULL)
    {
        return head1;
    }

    // till both of them values, compare and assign smaller to newNode

    while(head1!=NULL && head2!=NULL)
    {
        Node* newNode; // to hold smaller of the 2 values from Linkedlists
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

        if(head3 == NULL) // if first element to be linked
        {
            head3=newNode;
            tail3=newNode;
        }
        else // for second and so one elements to be connected
        {
            tail3->next= newNode;
            tail3 = tail3->next;
        }
    }

    // after comparing and traversing
    // one LL will have no elements
    // so we copy all elements from other one till it gets empty.

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
    
    // we return 3rd Linkedlist , which contains the combined linkedlist
    return head3;
}


Node *middleOfLL(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    Node* slow;
    Node* fast;

    slow = head;
    fast = head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast = fast->next->next;
    }

    return slow;
}


Node *mergeSort(Node *head)
{

    Node* middle = middleOfLL(head);

    // cout<<middle->data<<endl;
    
    Node* middleNext = middle->next;
    middle->next = NULL;
    
    // cout<<middleNext->data<<endl;
    
    Node* firstSorted = mergeSort(head);
    
    if(firstSorted==NULL)
    {
        cout<<"firstSorted is NULL\n";
    }else
    {
        cout<<"firstSorted is not NULL\n";
    }
    print(firstSorted);
    Node* secondSorted = mergeSort(middleNext);
    cout<<secondSorted ->data<<" ";
    print(secondSorted);
    
    Node *ans = mergeTwoSortedLinkedLists(firstSorted,secondSorted);
    return ans;
    
}


int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}