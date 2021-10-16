//Date : 5 MAy 21


#include<iostream>
//#include<conio.h>
#include<stdio.h>
using namespace std;

class Employee
{
    protected:   
    string name;
    int eNum;
    public:
    Employee(int userENum,string userName)
    {   //cout<<"\nBaseClass:Employee Constructor Invoked";
        name=userName;
        eNum=userENum;
    }

    void showInfo()
    {
        cout<<"\nEmployee Number:"<<eNum;
        cout<<"\nEmployee Name:"<<name;
    }

    void getInfo()
    {
        cout<<"\nEnter Employee Number:";
        cin>>eNum;
        cout<<"\nEnter Employee Name:";
        fflush(stdin);
        getline(cin,name);
    }

    void work()
    {
        cout<<endl<<name<<" is doing office work";
    }

    ~Employee()
    {
        //cout<<"\nBaseClass:Employee Destructor Invoked";
    }
};

class Devloper: public Employee
{   
    public:
    string favProgrammingLanguage;

    Devloper(int userENum,string userName,string favLang): Employee(userENum,userName)
    {   // cout<<"\nDerivedClass:Devloper Constructor Invoked";
        favProgrammingLanguage=favLang;
    }

    void solveBug(int num)
    {
        cout<<endl<<name<<" is solving "<<num<<" bugs in "<<favProgrammingLanguage;
    }

     void work()
    {
        cout<<endl<<name<<" is coding in "<<favProgrammingLanguage;
    }

        ~Devloper()
    {
        //cout<<"\nDerivedClass:Devloper Destructor Invoked";
    }
};

class Teacher:public Employee
{
    string subject;
    public:
    void prepareLesson()
    {
        cout<<endl<<name<<" is preparing Lessons for "<<subject;
    }

    Teacher(int userENum,string userName,string sub):Employee(userENum,userName)
    {   //cout<<"\nDerivedClass:Teacher Constructor Invoked";
        subject=sub;
    }

    void work()
    {
        cout<<endl<<name<<" is teaching "<<subject;
    }
    ~Teacher()
    {
        //cout<<"\nDerivedClass:Teacher Destructor Invoked";
    }
};

class OtherOne
{
    int othervar=5;
}o;

int main()
{
    system("cls"); 
    Devloper d(12,"Ayush","C++");
    Teacher t(13,"Snehal","History");

    //pointer of base class to object of derived class
    Employee *e1    =   &d; 
    Employee *e2    =   &t;
    d.work();
    t.work();
    d.solveBug(5);
    cout<<endl;
    e1->work();
    e2->work();
    cout<<endl;
    return 0;

}