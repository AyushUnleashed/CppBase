// enqueue, dequeue, size, isFull, isEmpty, front
#include<iostream>
#include<climits>
using namespace std;

template <typename T>
class Queue{
    T* data;
    int maxSize;
    int size;
    int front;
    int rear;
    public:
    Queue(int maxSize){
        front=-1;
        rear = -1;
        if(maxSize<=0)
        {
            maxSize=1;
        }
        this->maxSize = maxSize;
        data = new T[maxSize];
        size =0;
    }

    void enqueue(T val){
        //if quqeue is empty

        if(isFull())
        {
            cout<<"\nQueueue is Full";
            return;
        }

        if(isEmpty()){

            front =0;
            rear =0;
            data[rear] = val;
            size++;
        }else{
            rear++;
            data[rear]=val;
            size++;
        }
        cout<<"\nAdded:"<<val;

    }

    T dequeue(){
        //delete element
        if(isEmpty())
        {
            cout<<"\nQueueue is Empty cannot delete";
            return 0;
        }
        
        //last element
        if(front==rear && !isEmpty()){
            
            int temp = data[front];
            //setting queue as empty
            front = -1;
            rear=-1;
            size=0;
            return temp;

        }else{ //normal deletion
             
            int temp = data[front];
            front++;
            size--;
            return temp;
        }

    }

    int getSize(){
        return size;
    }

    bool isFull(){

        if(rear==(maxSize-1)){
            return true;
        }
        return false;
    }
    bool isEmpty(){

        if(front==-1 && rear==-1){
            return true;
        }
        return false;
    }

    T getFront(){
        if(isEmpty())
        {
            return 0;
        }

        return data[front];

    }

};

int main()
{
    Queue<int> q(5);

    q.enqueue(10);
    q.enqueue(20);
    cout<<"\nFront:"<<q.getFront();
    q.enqueue(30);
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nSize:"<<q.getSize();
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nSize:"<<q.getSize();
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nDeleted:"<<q.dequeue();
    cout<<"\nFront:"<<q.getFront();
    cout<<"\nDeleted:"<<q.dequeue();
    return -1;
}