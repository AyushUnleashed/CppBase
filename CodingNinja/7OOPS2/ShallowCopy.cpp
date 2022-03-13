#include<iostream>
#include<string.h>
using namespace std;

class Student{

    int age;
    char* name;

    public:
    Student(int age,char* name)
    {
        //shallow Copy
        this -> age =age;
        this -> name = name;

        //or
        // //Deep Copy
        // this -> age =age;
        // this -> name = new char[strlen(name)+1]; //+1 for null character
        // strcpy(this->name,name);
    }

    void print()
    {
        cout<<this->age<<" "<<this->name<<endl;
    }

};

int main()
{
    system("cls");
    char name[]="Ayush";
    Student s1(20,name);
    s1.print();
    name[0]='s';
    Student s2(30,name);
    s2.print();
    s1.print();
    return 0;
}