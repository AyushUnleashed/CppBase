#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int *p = new int[10];int counter=25;

    for(int i=0;i<10;i++,counter++)
    {
        *(p+(i*4)) = counter;
        // cout<<"p "<<i<<" "<<p;
        // cout<<endl;
    }
    cout<<"\nValues are:\n";

    for(int i=0;i<10;i++)
    {
        cout<<*(p+(i*4))<<" ";
    }

    cout<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<p[i*4]<<" ";
    }


    return 0;


}