#include<iostream>
#include<conio.h>
using namespace std;

struct Student
{
    int rollNo;
    int age;
};

Student fun1(Student*);

int main()
{
    system("cls");
    Student s1,s3;
    s3=fun1( &s1 );
    cout<<"s3 rollNo:"<<s3.rollNo;
    cout<<"\ns3 age:"<<s3.age;
    return 0;
}

Student fun1(Student *s2)
{   
    s2->rollNo = 1;
    s2->age = 32;
    return *s2;
}