#include<iostream>
#include<conio.h>
//ayush yadav//
using namespace std;

bool pytha(float a,float b,float c)
{   
    bool flag=0;
    float h,s1,s2;  //h=hypotaneuse s1,s2=side 1 and 2;
    //CODE to check which is greater.
    if( ( a>=b && a>=c ) )
    {
        h=a;
        s1=b;s2=c;
    }
    else if(b>=c && b>=a) 
    {
        h=b;
        s1=a;s2=c;
    }
    else if( c>=a && c>=b )
    {   
        h=c;
        s1=a;s2=b;
    }
    else
    {
        cout<<"\nError";
    }
  
    if(h*h==s1*s1+s2*s2)
    {
        flag=1;
    }

    return flag;
}

int main()
{   float a,b,c;//a,b,c are sides
    system("cls");
    cout<<"\nEnter 3 numbers:\n";
    cin>>a>>b>>c;

    if(pytha(a,b,c)==1)
    {
        cout<<"\nthey are Pythagorian triplets";
    }
    else
    {cout<<"\nNot Pythagorian triplets";}

    return 0;
}