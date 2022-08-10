#include<iostream>
#include<climits>
using namespace std;

//data array private
//push,pop,isEmpty,Top,size()
//#define MAX 1000

template< typename T>

class Stack
{
    private:
    int n;
    int top;
    T *data;

    public:
    Stack()
    {
        this->n = 4;
        data = new T[4];

        top=-1;
    }

    void push(T val)
    {
        if(top>=n-1)
        {
            //cout<<"\nStack Overflow, cannot add element";

            T* newData = new T[2*n];
            for(int i=0;i<n;i++)
            {
                newData[i]=data[i];
            }

            delete [] data;
            data = newData;
        }else{
            top++;
            data[top]=val;
            cout<<"\nElement: "<<data[top]<<" added";
        }


    }

    T pop()
    {
        if(isEmpty())
        {
            cout<<"\nStack Underflow, cannot delete";
            return 0;
        }
        else{
            cout<<"\nElement: "<<data[top]<<" deleted";
            top--;
            return data[top+1];
        }

    }

    bool isEmpty()
    {
        if(top<=-1)
        {
            return true;
        }
        return false;
    }

    T Top()
    {
        if(isEmpty())
        {
            cout<<"\nStack Underflow";
            return 0;
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
    Stack<int> s1;
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