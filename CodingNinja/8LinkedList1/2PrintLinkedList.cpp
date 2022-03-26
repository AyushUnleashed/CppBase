// create 5 nodes of linked list  ,1 to 5 also store address in head variable

#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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

int main()
{
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    Node* head = &n1;
    n1.next =&n2;
    n2.next =&n3;
    n3.next =&n4;
    n4.next =&n5;

    printLL(head);
}