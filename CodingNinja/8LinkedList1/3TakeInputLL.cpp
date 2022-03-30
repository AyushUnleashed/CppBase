// take input from user create linked list then return head to main function
#include<iostream>
using namespace std;

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

void printLL(Node* &head)
{   
    cout<<"\nLL is:\n";
    Node* temp=head;
    
    while (temp!=NULL)
    {
        cout<<"data:"<<temp->data<<" next:"<<temp->next<<endl;
        temp = temp -> next;
    }
}

Node* takeInput() // -1 to discontinue node insertion
{

    cout<<"Enter elements:";
    int newData;
    cin>>newData;  
    //getting data for first node
    Node* head=NULL; // no nodes so pointing to null
    while(newData!=-1){

        Node* newNode = new Node(newData);  //creates a node in heap
        if(head==NULL) // first node
        {
            head=newNode; // points head to first node
        }
        else // for other nodes 
        {
            Node *temp = head; //pointer for previous node 
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            // temp now has address of last node
            // we connect last node to newly created node
            temp->next = newNode;
        
        }
        // Enter data again for new node
        cin>>newData;
    }
    return head;
}

int main()
{
    Node* head = takeInput();
    printLL(head);

}