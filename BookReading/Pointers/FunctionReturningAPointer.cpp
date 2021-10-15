//Function Retruning a Pointer
//Returning ans 
#include<conio.h>
#include<iostream>
using namespace std;

int big;//for passing its address to other function it can't be local variable ||pc crash ho jata hai
int *largest(int &,int &,int &);//prototype of a pointer function because otherwise tum equate nhi kar skte function or max pointer ko

int main()
{   
    system("cls");
    int x,y,z;
    int *max;//pointer to store address of returned function
    cout<<"\nEnter x,y,z:";
    cin>>x>>y>>z;

    max = largest(x,y,z);   //equating pointer to a pointer function returning address

    cout<<"Largest number is:"<<*max;
    return 0;
}

int *largest(int &a,int &b,int &c)  // a is an alias for x || similar to int &a=x;
{
    big=a;
    if(b>a)
    {
        big=b;
    }
    if(c>a)
    {
        big=c;
    }
    return(&big);// &big is address of big variable
}
