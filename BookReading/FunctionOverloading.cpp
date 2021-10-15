#include<iostream>
#include<conio.h>
using namespace std;

const float pie=3.14;
float area(float);
float area(float,float);

int main()
{
    system("cls");
    float r,b,h,AREA;
    cout<<"Circle,Enter Radius:";
    cin>>r;
    AREA= area(r);
    cout<<"\nArea of circle is:"<<AREA;
    cout<<"\nTriangle ,Enter breadth and height:";
    cin>>b>>h;
    AREA= area(b,h);
    cout<<"\nArea of Triangle is:"<<AREA;

    return 0;
}

float area(float r)
{   
    return(pie*r*r);
}
float area(float b,float h)
{
    return(0.5*b*h);
}