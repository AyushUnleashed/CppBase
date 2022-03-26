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
        cout<<"Constructor was called\n";
    }
};


int main()
{
    system("cls");

    //statically allocation || Linked list
    Node n1(5);
    Node n2(8);

    Node* head = &n1; // saving head;

    n1.next = &n2;

    // printLL(head);
    // cout<<"\nn1:"<<n1.data<<" n1.next:"<<n1.next;
    // cout<<"\nn2:"<<n2.data<<" n2.next:"<<n2.next;

    //dyanmic allocation.

    Node *n3 = new Node(10); //n3,n4 are 8 bypte pointers in stack , while real meamory for nodes is created in heap
    Node *n4 = new Node(20);

    n3->next = n4; //pointing next od n3 to node of n4.
    

}
