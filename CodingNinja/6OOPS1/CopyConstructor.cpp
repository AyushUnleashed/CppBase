#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int rollNo;

    public:
    Student(string name,int rollNo)
    {
        this->name = name;
        this->rollNo = rollNo;
    }

    ~Student()
    {
        cout<<"\nDestructor is Called "<<this->name;
    }

    void getData()
    {
        cout<<"\nName:"<<this->name;
        cout<<"\nRollNo:"<<this->rollNo;
    }
};

int main()
{
    Student s1("Ayush",32);
    Student s2(s1);
    Student *s3 = new Student("Shyboy",69);
    s1.getData();
    s2.getData();
    delete s3;
    cout<<endl;
    return 0;
}