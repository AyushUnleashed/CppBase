#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int num;
    cin>>num;

    if(num==0)  //edge case
    {
        cout<<"\n 0  is Power of two";
        return 0;
    }

    if( (num &(num-1))==0 )
    {
        cout<<endl<<num<<" is Power of 2 ";
    }
    else
    {
       cout<<endl<<num<<" is not a Power of 2 "; 
    }

    //code to check power of 2
    //power of 2 , eg:2,4,6,8,16 have only 1 bit as 1 other are zero

    return 0;
}