#include<iostream>
#include<conio.h>
using namespace std;

#define ZERO 0   // ZERO is new name for number 0 
int main()
{
    system("cls");
    typedef int i;   // i is new name for int
    i a,b,sum;  int c,d; // same thing
    cout<<"Enter a and b\n";
    cin>>a>>b;
    sum=a+b;
    c=(d=5,d+6);//d+6 is assigned to c || left to right statements executed
    cout<<sum<<endl<<c<<endl<<endl<<ZERO;


    return(0);
}
