#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Test
{
    int salary;
    string name;

    public:

    Test(int sal,string naam)
    {
        salary=sal;
        name=naam;
    }

    Test *returnFunction();
    // {
        
    // }

    void display();

};

void Test::display()
{
    cout<<endl<<"Name is: "<<name;
    cout<<endl<<"Salary is: "<<salary;
}

Test* Test::returnFunction()    //function of return type ClassName*(pointer to object)
{
    return this;
}

int main()
{   	system("cls");
    Test t1(20000,"Ayush");
    Test t2(40000,"Samantha");
    Test *tt;
    tt = t1.returnFunction();
    cout<<endl;
    tt->display();
    cout<<endl;
    tt = t2.returnFunction();
    tt->display();

}
