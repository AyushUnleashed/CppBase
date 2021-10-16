#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int octToDec(int octal)
{   int decimal=0,rem=0;
    for(int i=0;octal>0;i++)
    {
        rem=octal%10;
        decimal=decimal+(rem*pow(8,i));
        octal=octal/10;
    }
    return decimal;
}

int main()
{   system("cls");
    int octal,decimal;
    cout<<"\nEnter octal no:";
    cin>>octal;
    decimal=octToDec(octal);
    cout<<"\nDecimal no. is:"<<decimal;

    return 0;

}