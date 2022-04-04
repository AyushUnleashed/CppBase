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

Node* insertNode(Node *head, int i, int data) {
    int len=length(head);

    Node* newNode = new Node(data);

    if(i<0 || i> len)
    {
        return head;
    }

    if(i==len)
    {
        // insert at last 

        Node* temp = head;
        while(temp!=NULL)
        {
            temp=temp->next;
        }
        temp=newNode;

        return head;
    }

    if(head==NULL)
    {
        head = newNode;
        return head;
    }

    if(i==0)
    {
        Node* temp = head;
        head = newNode;
        head ->next = temp;

        return head;
    }

    Node* x = insertNode(head->next,i-1,data);
    head->next = x;
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
        head = insertNode(head, pos, data);
        print(head);
    }
}