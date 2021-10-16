#include<iostream>
#include<conio.h>
using namespace std;

string gradeStudent(int marks)
{   string grade;
    if(marks >90 && marks<=100 )
    {
        grade="AA";
    }
    else if(marks >80 && marks<=90 )
    {
        grade="AB";
    }
    else if(marks >70 && marks<=80 )
    {
        grade="BB";
    }
    else if(marks >60 && marks<=70)
    {
        grade="BC";
    }
    else if(marks >50 && marks<=60 )
    {
        grade="CD";
    }
    else if(marks >40 && marks<=50 )
    {
        grade="DD";
    }
    else if(marks<=40 )
    {
        grade="Fail";
    }


    return grade;
}
int main()
{
    system("cls");
    int marks;
    cin>>marks;
    cout<<"Grade is";
    cout<<gradeStudent(marks);

}