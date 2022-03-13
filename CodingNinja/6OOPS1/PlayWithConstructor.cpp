#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int rollNo;

    public:
    Student()
    {
        name="None";
        rollNo=-1;
        //Constructor 1
    }

    Student(string name)
    {
        //Constructor 2
        this->name = name;
    }

    Student(string name,int rollNo)
    {
        //Constructor 3
        this->name = name;
        this->rollNo = rollNo;
    }

    ~Student()
    { cout<<"\nDestructor is Called "<<this->name;}

    void getData()
    {
        cout<<"\nName:"<<this->name;
        cout<<"\nRollNo:"<<this->rollNo;
    }
};

int main()
{
    Student s1;
    cout<<endl;
    s1.getData();
    Student s2("Student2");
    cout<<endl;
    s2.getData();
    Student s3("Student3",34);
    cout<<endl;
    s3.getData();
    Student s4(s3);
    cout<<endl;
    s4.getData();
    s2=s1;
    cout<<endl;
    s2.getData();
    Student s5 = s1;
    cout<<endl;
    s5.getData();
    return 0;
}