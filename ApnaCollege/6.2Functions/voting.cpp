#include<iostream>
#include<conio.h>
using namespace std;

void voteop(int age)
{
    bool vote=false;
    if(age>=18)
    {
        cout<<"\nYou are eligible to vote";
    }
    else if(age<18 && age>=0)
    {
        cout<<"\nYou are not eligible to vote";
    }
    else{cout<<"\nInvalid age";}

}

int main()
{
    system("cls");
    int age;
    cout<<"\nEnter your age:";
    cin>>age;
    voteop(age);
}

