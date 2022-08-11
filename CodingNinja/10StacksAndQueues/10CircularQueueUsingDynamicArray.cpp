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

    void printQueue()
    {
        cout<<"\nQueue:";
        for(int i=front;i<=rear;)
        {
            cout<<"i:"<<i<<" "<<data[i]<<" ";
            i=((i+1)%maxSize);
        }
        cout<<endl;
    }
    void enqueue(T val){
        //if quqeue is empty

        if(isFull())
        {
            T* newData = new T[maxSize*2];

            //copy old data into new one

            int j=0;

            cout<<"\nCopied Data\n";
            for(int i=front;i<maxSize;i++)
            {
                newData[j]=data[i];
                j++;
            }

            for(int i=0;i<front;i++)
            {
                newData[j]=data[i];
                j++;
            }

            delete []data;
            data =newData;
            front =0;
            rear=size-1;
            maxSize = maxSize*2;
        }

        if(isEmpty()){

            front =0;
            rear =0;
            data[rear] = val;
            size++;
        }else{
            rear = (rear+1)%maxSize;
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

        if(rear+1==front){
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
    q.enqueue(40);
    q.printQueue();
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
    q.printQueue();
    q.enqueue(80);
    cout<<"\nSize:"<<q.getSize();
        cout<<"\nFront:"<<q.getFront();
    q.enqueue(90);

    cout<<"\nSize:"<<q.getSize();

    cout<<"\nFront:"<<q.getFront();
    q.printQueue();

    return -1;
}