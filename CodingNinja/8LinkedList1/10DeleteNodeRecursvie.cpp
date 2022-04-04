#include <iostream>
using namespace std;


class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int length(Node* head)
{
    Node* temp = head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

Node *deleteNodeRec(Node *head, int pos) {

    //Base case 
    // head == null nothing to delete

    if(head==NULL) 
    {
        return head;
    }

    //Small Calculation

    if(pos==0) //delete first index element
    {
        Node *temp = head; // first element
        head = head->next;
        delete temp;

        return head;
    }

    //Recursvie small problem

    Node* x = deleteNodeRec(head->next,pos-1);
    head ->next = x;

    return head;
}

Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}



void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = deleteNodeRec(head,pos);
        print(head);
    }
}