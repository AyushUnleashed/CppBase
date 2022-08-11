#include<iostream>
using namespace std;





class Node {
    public :
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Queue {
    
    Node* frontNode;
    Node* rearNode;
    int size;
	// Define the data members
   public:
    Queue() {
        frontNode=NULL;
        rearNode=NULL;
        size=0;
    
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        
        return size;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        
        if(frontNode==NULL && rearNode==NULL)
        {
            return true;
        }
        return false;
	}

    void enqueue(int data) {
    
        Node* newNode = new Node(data);
		//if empty, 1st insertion
        if(isEmpty()){
            
            frontNode=newNode;
            rearNode=newNode;
        }else{
            rearNode->next = newNode;
            rearNode=rearNode->next;
        }
        size++;
	}

    int dequeue() {
        
        if(size==0)
        {
            return -1;
        }
        
        if(size==1){
         
            Node* tempNode = frontNode;
            int ans= tempNode->data;
            frontNode=NULL;
            rearNode=NULL;
            size=0;
            delete tempNode;
            return ans;
            
        }else{
            
            Node* tempNode = frontNode;
            int ans= tempNode->data;
            frontNode=frontNode->next;
            size--;
            delete tempNode;
            return ans;
        }
        // Implement the dequeue() function
    }

    int getFront() {
        if(isEmpty())
        {
           return -1; 
        }else{
            return (frontNode->data);
        }
        // Implement the front() function
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    cout<<"\nFront:"<<q.getFront();
    q.enqueue(30);
    q.enqueue(40);
    //q.printQueue();
    q.enqueue(50);
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nSize:"<<q.getSize();
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nDeleted:"<<q.dequeue();

    q.enqueue(60);
    cout<<"\nFront:"<<q.getFront();
    q.enqueue(70);
    cout<<"\nFront:"<<q.getFront();
    cout<<"\nSize:"<<q.getSize();
    //q.printQueue();
    q.enqueue(80);
    cout<<"\nSize:"<<q.getSize();
        cout<<"\nFront:"<<q.getFront();
    q.enqueue(90);

    cout<<"\nSize:"<<q.getSize();

    cout<<"\nFront:"<<q.getFront();
    //q.printQueue();

    return -1;
}