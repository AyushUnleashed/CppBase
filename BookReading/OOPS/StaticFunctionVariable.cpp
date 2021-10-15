#include<iostream>
#include<conio.h>
using namespace std;

class First
{   
    static int noOfObjects;
    int objectCode=0;
    public:

    void setCode()
    {
        
        objectCode = ++noOfObjects;
    }

    void showCode()
    {
        cout<<endl<<"ObjectCode is "<<objectCode;
    }

    static void showNoOfObjects()
    {
        cout<<endl<<"Total no. Of obejects"<<noOfObjects;
    }

};

int First::noOfObjects; //this set noOfObjects to zero


int main()
{
    system("cls");
    First f1,f2,f3;
    First::showNoOfObjects();
    f1.setCode();
    First::showNoOfObjects();
    f2.setCode();
    f3.setCode();
    f3.showNoOfObjects();
    f3.showCode();
    f2.showCode();
    f1.showCode();


}