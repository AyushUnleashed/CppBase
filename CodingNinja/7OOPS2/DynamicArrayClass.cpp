#include<iostream>
using namespace std;

class DynamicArray{
    int* data;
    int capacity;
    

    public: 
    int nextIndex;
    DynamicArray()
    {
        capacity =5;
        data = new int[capacity];
        nextIndex=0;
    }

    //copy constructor
    DynamicArray(DynamicArray const &d){
        this->data = new int[capacity]; //Deep Copy

        for(int i=0;i<d.nextIndex;i++)
        {
            this->data[i] =data[i];
        }
        // we will not copy address
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    void operator = (const DynamicArray &d)
    {
        this->data = new int[capacity]; //Deep Copy

        for(int i=0;i<d.nextIndex;i++)
        {
            this->data[i] =data[i];
        }
        // we will not copy address
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    void addElement(int element)
    {
        if(nextIndex==capacity)
        {
            //create new array, copy then add

            int* newData = new int[capacity*2];

            for(int i=0;i<capacity;i++)
            {
                newData[i]=data[i];
            }   
            delete []data; //old data array deleted
            data = newData; //data pointer now points to new memory
            delete newData; //new data pointer deleted now
            capacity=capacity*2;


        }
        data[nextIndex]=element;
        nextIndex++;  
    }

    void add(int index,int element)
    {
        if(index<nextIndex)
        {   //overwrite
            data[index]=element;
        }
        else if (index==nextIndex)
        {  
            addElement(element);
        }else{return;}
    }

    int getCapacity(){return capacity;}

    void printArray()
    {
        for(int i=0;i<nextIndex;i++)
        {
            cout<<endl;
            cout<<data[i]<<" ";
        }
    }

    int getElement(int index) const
    {
        if(index<nextIndex)
        {return data[index];}
        else
        {
            return -1;
        }

    }

};

int main()
{   
    DynamicArray d1;
    d1.addElement(5);
    d1.printArray();
    d1.addElement(7);    d1.addElement(2);    d1.addElement(-123);    d1.addElement(73);
    d1.addElement(7);    d1.addElement(2);    d1.addElement(-123);    d1.addElement(73);
    d1.printArray(); cout<<endl<<"size:"<<d1.nextIndex<<" capacity:"<<d1.getCapacity();

    d1.add(4,69);
    cout<<d1.getElement(4);
    d1.printArray();
    return 0;

}