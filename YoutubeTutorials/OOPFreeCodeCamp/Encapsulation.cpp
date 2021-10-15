//Date : 5 MAy 21
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Employee
{
    
    string name;
    int eNum;
    public:
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

    void getInfo()
    {
        cout<<"\nEnter Employee Number:";
        cin>>eNum;
        cout<<"\nEnter Employee Name:";
        fflush(stdin);
        getline(cin,name);
        

    }
};

int main()
{
    system("cls"); 
    Employee employee1(-1,"");
    Employee employee2 = employee1;
    employee1.getInfo();
    cout<<endl;
    employee2.getInfo();
    cout<<endl;
    employee1.showInfo();
    cout<<endl;
    employee2.showInfo();
    return 0;
}