#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   system("cls");
    
    int n1,n2;
    cout<<"Enter n1 and n2:";
    cin>>n1>>n2;
    cout<<"Factorial of n1 and n2 are respectively";
    int fact(int);
    cout<<endl<<fact(n1)<<"\t"<<fact(n2);

    return 0;

}

int fact(int num)
{   int f=1;
    while(num>0)
    {
        f=f*num;
        num--;
    }
    return f;
}