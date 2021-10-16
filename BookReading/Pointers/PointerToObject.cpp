#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Student
{
    int rollNo;
    int marks;
    string name;

    public:
    void enter(int,int,string);
    void display(int,int,string);
};

void Student::enter(int r,int m, string na)
{
    rollNo=r;
    name=na;
    marks=m;
    
}

void Student::display(int r,int m, string na)
{
    cout<<"\nRoll no. is"<<rollNo;
    cout<<"\nName is:"<<na;
    cout<<"\nMarks are:"<<marks;
    
}

 
int main()
{   int size = 3;
    system("cls");
    int r,m;
    string na;

    Student *ptr = new Student[size];
    Student *temp = ptr;

    for(int i=0;i<size;i++)
    {   
        cout<<"Enter Details of Student "<<i+1<<"\n";
        cout<<"\nEnter Roll no.";cin>>r;
        cout<<"\nEnter Name :";cin>>na;
        cout<<"\nEnter Marks:";cin>>m;
        ptr->enter(r,m,na);
        ptr++;
        cout<<"\n";
    }

    for(int i=0;i<size;i++)
    {   ptr=temp;
        cout<<"Student "<<i+1<<"\n";       
        ptr->display(r,m,na);
        temp++;
        delete(ptr);
        cout<<"\n";
    }

    return 0;
}