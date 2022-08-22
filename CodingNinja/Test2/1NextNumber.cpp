#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};



Node* reverseLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* headNext = head->next;
    Node* revHead= reverseLL(head->next);
    headNext->next=head;
    head->next=NULL;
    return revHead;
    
}

Node* NextLargeNumber(Node *head) {
    
    if(head==NULL){
        return head;
    }
    
    if(head->next==NULL){
        
        if(head->data!=9){
            head->data+=1;
            return head;
        }else{
            Node* newNode = new Node(1);
            head->data = 0;
            Node* temp =head;
            head = newNode;
            newNode->next= temp;
            temp->next=NULL;
            return head;   
        }
    }
    
    Node* temp = head;
    Node* tail = NULL;
    
    while(temp->next!=NULL){
        
        temp=temp->next;
    }
    tail = temp;
    
    
    if(tail->data!=9){  
        (tail->data)+=1; 
        return head;
    }
    
    
    Node* rev = reverseLL(head);
    
    Node* revHead= rev;
    
    while((revHead->data)==9 && (revHead->next)!=NULL ){
        
        (revHead->data)=0;
        
        if(((revHead->next)->data)!=9){
            
            ((revHead->next)->data)+=1;
        }
        revHead=revHead->next;
    }
    
    if(revHead->data!=9)
    {
        (revHead->data)+=1;
    }else{
        
        (revHead->data) = 0;
        Node* newNode = new Node(1);
        revHead->next = newNode;
    }
    
    Node* finalAns = reverseLL(rev);

    return finalAns;
}




Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
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
    cout<<endl;
}

int main() {
    Node *head = takeinput();
    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}



