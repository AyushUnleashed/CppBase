#include<iostream>
using namespace std;

//static members are independ of objects, they are members of class
// shared among all objects
class Student
{
    private:
    static int totalStudents;
    public:
    int studentName;
    int rollNumber;
    

    Student()
    {
        totalStudents++;
    }

    static int getTotalStudents()
    {
        return totalStudents;
    }
};

//outside because doesn't belong to any object 
int Student::totalStudents =0;


int main()
{
    Student s1,s2,s3;
    cout<<s1.rollNumber<<" "<<s1.studentName<<endl;
    cout<<Student::getTotalStudents();
    cout<<s1.getTotalStudents();
    return 0;
}