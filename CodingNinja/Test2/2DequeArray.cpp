//Not Done


#include<iostream>
using namespace std;

class Deque {
    int front;
    int rear;
    int* data;
    int maxSize;
    int currentSize;
    
    public:
    Deque(int maxSize){
        this->maxSize=maxSize;
        front =-1;
        rear=-1;
        currentSize=0;
        
        data = new int[maxSize];
    }
    
    bool isFull(){
        
        if( ((rear+1)%maxSize)==front){
            return true;
        }else{
            return false;
        }
    }
    
    bool isEmpty(){
        if(currentSize==0){
            return true;
        }else{
            return false;
        }
    }
    
    void insertRear(int val){
        
        if(isFull()){
            cout<<"-1\n";
            return;
        }
        
        if(front==-1 && rear ==-1){
        	//1st element
            front=0;
            rear=0;
            data[rear]=val;
            currentSize++;
            return;
        }else{
            //not first element
            rear = (rear+1)%maxSize;
            //cout<<"\nRearInserted at i:["<<rear<<"]:"<<val<<endl;
            data[rear]=val;
            currentSize++;
        }
    }
    
    void deleteFront(){
        
        if(isEmpty()){
            cout<<"-1\n";
            return;
        }
        
        if(front==rear && front!=-1 && rear!=-1){
            front=-1;
            rear=-1;
            currentSize=0;
            return;
        }else{ //not the last element
            front= (front+1)%maxSize;
            currentSize--;
        }
    }
    
    int getFront(){
        
        if(isEmpty()){
            return -1;
        }
        return data[front];
    }
    
    int  getRear(){
        
        if(isEmpty()){
            return -1;
        }
        
        return data[rear];
    }
    
    void deleteRear(){
        
        if(isEmpty()){
            cout<<"-1\n";
            return;
        }
        
        if(front==rear && front!=-1 && rear!=-1){
            front=-1;
            rear=-1;
            currentSize=0;
        }else{
           
            if(rear==0){
                rear=maxSize-1;
            }else{
                rear--;
            }
            
            currentSize--;
        }
        
    }
    
    void insertFront(int val){
        
         if(isFull()){
            cout<<"-1\n";
            return;
        }
        
        if(front==-1 && rear ==-1){
        	//1st element
            front=0;
            rear=0;
            data[rear]=val;
            currentSize++;
        }else{
            
            if(front==0){
                front=maxSize-1;
            }else{
                front--;
            }
            
            //cout<<"\nFrontInserted at i:["<<front<<"]:"<<val<<endl;
            //not first element
            data[front]=val;
            currentSize++;
        }
    }
    
};



// /**********
 
//  Following is the main function we are using internally.
//  Refer this for completing the Dequeue class.
 
 
 int main()
 {
 Deque dq(10);
 int choice,input;
 while(true) {
 cin >> choice;
 switch (choice) {
 case 1:
 cin >> input;
 dq.insertFront(input);
 break;
 case 2:
 cin >> input;
 dq.insertRear(input);
 break;
 case 3:
 dq.deleteFront();
 break;
 case 4:
 dq.deleteRear();
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
 
//  ************/
