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

void printReverse(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    printReverse(head->next);
	// add this head to a reverse linked list and return head2
    cout<<head->data<<" ";

}

	Node* reverseLL(Node* head) {
  
    if(head==NULL || head->next==NULL)
	{
		//for 0  or 1 element return itself
		return head;
	}

	Node* orignalHeadNextElement = head->next;

	//get head2; || Reversing Smaller LinkedList
	Node* head2 = reverseLL(head->next);

	//after reverse of Small LinkedList we need to reverse this part also.

	// orignalHeadNextElement is last element of smaller Reversed LinkedList
	// we need to attach orignal head to last element of smaller Reversed LinkedList

	orignalHeadNextElement -> next = head;

	// head should point to null , becuase it is last element, after reverse

	head ->next = NULL;

	return head2;
    }



    bool isPalindrome(Node* head) {
        
        bool isPal = true;
        
        Node* reversedHead = reverseLL(head);
        int llSize = 0;
        while(head!=NULL)
        {
			llSize++;
            cout<<"Head Val:"<<head->data<<" "<<"Reversed Head Val:"<<reversedHead->data<<endl;
            if(head->data != reversedHead->data)
            {
				cout<<"\n is Pal is false";
                isPal = false;
                break;
            }
            
            // if(isPal==false)
            // {
            //     break;
            // }
            head=head->next;
            reversedHead=reversedHead->next;
        }

		cout<<"llSize:"<<llSize<<endl;
        return isPal;
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
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;


		Node* reversedHead = reverseLL(head);

		printReverse(head);
		printReverse(reversedHead);

	}

	return 0;
}