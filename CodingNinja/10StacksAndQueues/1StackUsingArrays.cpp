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
    Stack(int n)
    {
        this->n = n;
        data = new int[n];

        top=-1;
    }

    void push(int val)
    {
        if(top>=n-1)
        {
             cout<<"\nStack Overflow, cannot add element";
            return;
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
        return data[top];
        top--;
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
    Stack s1(5);
    s1.push(10);
    s1.push(11);
    cout<<"\nsize:"<<s1.size();
    s1.push(12);
    s1.pop();
    s1.Top();
    cout<<"\nsize:"<<s1.size();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.push(15);
    s1.Top();
    return 0;

}