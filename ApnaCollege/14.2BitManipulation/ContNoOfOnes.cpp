//Program to cocunt number of ones in a given number
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int num;
    int onum;
    int countOne=0;
    cin>>num;
    int oNum=num;

    //since num & (num-1) -> give all bits same as num
    //expect the right most set bit(1) it turn from(1 -> 0)
    //therefore in every iteration we loose right most set bit
    //and we count it , till num  becomes zero

    //algorithm
    while(num>0)
    {
        num = ( num & (num-1) );    
        countOne++;
    }

    cout<<"No. of ones in binary of "<<oNum<<" is: "<<countOne;
    return 0;
}