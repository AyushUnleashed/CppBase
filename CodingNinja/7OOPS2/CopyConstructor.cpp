#include<iostream>
#include<string.h>
using namespace std;

class Student{

    int age;
    char* name;

    public:
    Student(int age,char* name)
    {
        //Deep Copy
        this -> age =age;
        this -> name = new char[strlen(name)+1];
        //+1 for null character
        strcpy(this->name,name);
    }   

    Student(Student const &s)
    {
        //By default copy constructor do shallow copy
        //Deep Copy
        this -> age =age;
        this -> name = new char[strlen(name)+1];
        //+1 for null character
        strcpy(this->name,name);
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
    Student s2(s1);
    s2.print();
    s1.print();
    

    return 0;
}