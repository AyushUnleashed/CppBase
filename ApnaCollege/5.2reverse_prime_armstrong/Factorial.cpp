#include<iostream>
#include<stdlib.h>
using namespace std;

//Factorial of a number
// eg: 5! = 5*4*3*2*1
// n! = 1*......*n

 int main()
{   system("cls");

   int num,fac;
    cout<<"Enter number:";
    cin>>num;
    fac=1;
    while(num>0)
    {
        fac=fac*num;
        num--;
    }

    cout<<endl<<"Factorial is:"<<fac;

    return 0;

}