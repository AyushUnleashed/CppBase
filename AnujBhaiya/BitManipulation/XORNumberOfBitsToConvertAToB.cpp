//NumberOfBitsToConvertAToB.cpp

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int bitCount=0;
    int a;
    cin>>a;
    int b;
    cin>>b;
    int xorS =a^b;

    //code to check first bit if its 1 increase count
    while(xorS>0)
    {
        if(( xorS & 1 )!=0)
        {
            bitCount++;
        }
        xorS =xorS>>1;
    }
    cout<<"\nTotal bits need to change to convert "<<a<<" to "<<b<<" is:"<<bitCount;
    return 0;
}