#include<iostream>
#include<climits>
using namespace std;

//data array private
//push,pop,isEmpty,Top,size()
//#define MAX 1000

class Stack
{
    private:
    int n;
    int top;
    int *data;

    public:
    Stack()
    {
        this->n = 4;
        data = new int[4];

        top=-1;
    }

    void push(int val)
    {
        if(top>=n-1)
        {
            //cout<<"\nStack Overflow, cannot add element";

            int* newData = new int[2*n];
            for(int i=0;i<n;i++)
            {
                newData[i]=data[i];
            }

            delete [] data;
            data = newData;
        }

        top++;
        data[top]=val;
        cout<<"\nElement: "<<data[top]<<" added";
    }

    int pop()
    {
        if(isEmpty())
        {
            cout<<"\nStack Underflow, cannot delete";
            return INT_MIN;
        }
        cout<<"\nElement: "<<data[top]<<" deleted";
        top--;
        return data[top+1];
    }

    bool isEmpty()
    {
        if(top<=-1)
        {
            return true;
        }
        return false;
    }

    int Top()
    {
        if(isEmpty())
        {
            cout<<"\nStack Underflow";
            return INT_MIN;
        }
        cout<<"\ntop Element is:"<<data[top];
        return data[top];
    }

    int size()
    {
        return (top+1);
    }

};




int main()
{
    Stack s1;
    s1.push(10);
    s1.push(11);
    cout<<"\nsize:"<<s1.size();
    s1.push(12);
       s1.push(17);
    s1.push(32);
       s1.push(123);
    s1.push(1221);
       s1.push(1050);
    s1.push(1001);
    cout<<endl<<s1.pop();
    cout<<endl<<s1.Top();
    cout<<"\nsize:"<<s1.size();
    cout<<endl<<s1.pop();
   cout<<endl<<s1.pop();
   cout<<endl<<s1.pop();
   cout<<endl<<s1.pop();
    s1.push(15);
 cout<<endl<<s1.Top();
    return 0;

}