#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   
    system("cls");
    int x=5;
    float y=7.9;
    int* iPtr=&x;
    float* fPtr=&y;
    void* vPtr;

    cout<<"\nUsing int pointer";
    cout<<" x:"<<*iPtr;

    cout<<"\n\nUsing float pointer";
    cout<<" y:"<<*fPtr;

    vPtr=&x;
    cout<<"\n\nUsing void pointer";
    cout<<" x:"<<*( ( int* ) vPtr);  //converting void pointer to int pointer ,Expilicit conversion (datatype)

    vPtr=&y;
    cout<<"\n\nUsing void pointer";
    cout<<" y:"<<*( ( float* ) vPtr);  


}