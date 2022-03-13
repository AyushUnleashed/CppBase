#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int lastNumber = num -(((int)(num/10))*10);
    cout<<endl<<lastNumber;
}