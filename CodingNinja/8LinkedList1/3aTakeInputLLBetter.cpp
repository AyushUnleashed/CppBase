// take input from user create linked list then return head to main function
#include<iostream>
using namespace std;

// O(n) time complexity

class Node{
    public:
    int data;
    Node* next; 

    Node(int data)
    {
        this->data;
        this->next=next;
    }
};

void printLL(Node* head)
{   
    cout<<"\nLL is:\n";
    Node* temp=head;
    
    while (temp!=NULL)
    {
        cout<<"data:"<<temp->data<<" next:"<<temp->next<<endl;
        temp = temp -> next;
    }
}

Node* takeInputBetter() // -1 to discontinue node insertion
{

    cout<<"Enter elements:";
    int newData;
    cin>>newData;  
    //getting data for first node
    Node* head=NULL; // no nodes so pointing to null
    Node * tail = NULL;
    while(newData!=-1){

        Node* newNode = new Node(newData);  //creates a node in heap
        if(head==NULL) // first node
        {
            head=newNode; // points head to first node
            tail=newNode;
        }
        else // for other nodes 
        {   
            tail->next = newNode;
            tail=tail->next;
        }
        // Enter data again for new node
        cin>>newData;
    }
    return head;
}

int main()
{
    Node* head = takeInputBetter();
    printLL(head);
}