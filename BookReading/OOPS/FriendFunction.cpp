#include<iostream>
#include<conio.h>
using namespace std;

class Box
{
    float width;

    public:
    void setWidth(float);
    friend void printWidth(Box);
};

void Box::setWidth(float wid)
{
    width=wid;
}

void printWidth(Box box)    //friend function can access private members also
{
    cout<<box.width;
} 

int main()
{
    system("cls");
    Box box1;
    box1.setWidth(4.2);
    cout<<"Width is ";printWidth(box1);

}

