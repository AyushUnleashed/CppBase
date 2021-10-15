#include<iostream>
#include<conio.h>
using namespace std;

class Square
{
    float side; //4 byte
    //float scsc;
    public:
    Square(float);
    float area()
    {
        return side*side;
    }
};



Square::Square(float x):side(x)
{
    //side=x;
}

class smallSquare:public Square
{
    char ss; // 8 byte
    short sss;
    public:
    smallSquare(float sideLength):Square(sideLength)
    {
        
    }

};

int main()
{
    system("cls");
    Square s1(5.2);
    cout<<"\nArea is ";
    cout<<s1.area();
    smallSquare ss1(5.0);
    cout<<endl<<"Size of s1:"<<sizeof(s1);
    cout<<endl<<"Size of ss1:"<<sizeof(ss1);
    //cout<<endl<<"Size of char:"<<sizeof(short);
    return 0;
}