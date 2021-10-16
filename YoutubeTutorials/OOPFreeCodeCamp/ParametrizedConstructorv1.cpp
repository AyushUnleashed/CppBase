//Date : 5 MAy 21

//Parametrised Constructor
#include<iostream>
#include<conio.h>
using namespace std;

class Employee
{
    public:
    string name;
    int eNum;

    Employee(int userENum,string userName)
    {
        name=userName;
        eNum=userENum;
    }

    void showInfo()
    {
        cout<<"\nEmployee Number:"<<eNum;
        cout<<"\nEmployee Name:"<<name;
    }
};

int main()
{
    system("cls"); 

    Employee employee1  = Employee(21,"Ayush"); //Explicit Call
    Employee employee2(32,"Shubham");           //Implicit Call

    employee1.showInfo();
    cout<<endl;
    employee2.showInfo();
    return 0;
}