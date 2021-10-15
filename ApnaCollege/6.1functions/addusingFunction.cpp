#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   system("cls");
    float n1,n2;
    float addnum(float,float);
    cout<<"Enter 2 number:";
    cin>>n1>>n2;
   
    cout<<addnum(n1,n2);

    return 0;
}

float addnum(float n1,float n2)
{
    float sum = n1+n2;
    return sum;
}