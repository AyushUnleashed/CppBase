#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    
    ~Node() {
        if(next) {
            delete next;
        }
    }
};





void deleteAlternateNodes(Node *head) {
    
    if(head==NULL || head->next==NULL){
        return;
    }
    
    Node* temp =head;
	
    while(temp!=NULL && temp->next!=NULL){
        
        temp->next = (temp->next)->next;
        Node* toDelete = temp->next;
        toDelete->next=NULL;
        delete toDelete;
        
        
        temp=temp->next;
        //delete toDelete;
        
    }
}





Node* takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node *head = takeinput();
    deleteAlternateNodes(head);
    print(head);
    delete head;
    return 0;
}