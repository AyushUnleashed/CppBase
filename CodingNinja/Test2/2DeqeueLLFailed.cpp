//Failed
//Not Done


#include<iostream>
using namespace std;

/**********
 
 Following is the main function we are using internally.
 Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertfront(input);
 break;
 case 2:
 cin >> input;
 dq.insertrear(input);
 break;
 case 3:
 dq.deletefront();
 break;
 case 4:
 dq.deleterear();
 break;
 case 5:
 cout << dq.getFront() << "\n";
 break;
 case 6:
 cout << dq.getRear() << "\n";
 break;
 default:
 return 0;
 }
 }
 
 return 0;
 }
 
 ************/

class Node{
    public:
    int data;
    Node* next;
    
    
    Node(int val){
        this->data = val;
        this->next =NULL;
    }
};


class Deque {
    // Complete this class
    
    int size;
    Node* front;
    Node* rear;
    int maxSize;
    
    public:
    
    Deque(int givenSize){
        
        maxSize = givenSize;
        size=0;
        front=NULL;
        rear=NULL;
    }
    
        
    bool isFull(){
        if(size==maxSize){
            return true;
        }else{
            return false;
        }
    }
    
    bool isEmpty(){
        
        if(front==NULL && rear==NULL){
            return true;
        }else{
            return false;
        }
    }
    
    void insertFront(int val){
        
        if(isFull()){
            cout<<"-1\n";
            return;
        }
        
        if(front==NULL && rear==NULL){
            //first element
            Node* newNode = new Node(val);
            front=newNode;
            rear=newNode;
        }else{
            //not first node
            
            Node* temp =front;
            Node* newNode = new Node(val);
            newNode->next = temp;
            front = newNode;
        }
        
        size++;
    }
    
    void insertRear(int val){
        
        if(isFull()){
            cout<<"-1\n";
            return;
        }
                
        if(front==NULL && rear==NULL){
            //first element
            Node* newNode = new Node(val);
            front=newNode;
            rear=newNode;
        }else{
            //not first node
            Node* newNode = new Node(val);
            rear->next = newNode;
            rear=rear->next;
            rear->next=NULL;
        }
        
        size++;
    
    }
    
    void deleteFront(){
        
        if(isEmpty()){
            cout<<"-1\n";
            return;
        }
        
        
        if(front==rear && front!=NULL && rear!=NULL){ //1 element
            
            front=NULL;rear=NULL;size=0;

        }else{ //multiple elements
            
            Node* temp =front;
            front=front->next;
            delete []temp;
            size--;
            
        } 

    }
    

    
    
    void deleteRear(){
        
        if(isEmpty()){
            cout<<"-1\n";
            return;
        }
        
        if(front==rear && front!=NULL && rear!=NULL){ //1 element
            
            front=NULL;rear=NULL;size=0;

        }else{ 
        
        
        Node* temp=front;
        while((temp->next)->next!=NULL){
            temp=temp->next;
        }
        
        Node* toDelete = temp->next;
        
        temp->next = NULL;
        
        delete []toDelete;
            size--;
            
        }
        
    }
    
    int getFront(){
        if(isEmpty()){
            return -1;
        }else{
            
            return (front->data);
        }
    }
    
    
    int getRear(){
        if(isEmpty()){
            return -1;
        }else{
            
            return (rear->data);
        }
    }
};

