#include<iostream>
#include<string.h>
using namespace std;

class Student{

    int age;
    const int rollNumber;
    int &x; //refrence variable of age, 
    //we want to write int &x=this ->age;

    public:

    Student(int r,int age):rollNumber(r),age(age),x(this->age)
    {
        //we used initialisation list
        // to set rollNumber at the time of creation.
    }

    void print()
    {
        cout<<this->age<<" "<<this->rollNumber<<endl;
    }
};



int main()
{
    system("cls");
    Student s1(10,102);
    s1.print();
    return 0;
}