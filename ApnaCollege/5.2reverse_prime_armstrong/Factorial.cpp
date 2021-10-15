#include<iostream>
#include<stdlib.h>
using namespace std;


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