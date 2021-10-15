#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int BinToDec(int binary)
{   int decimal=0,rem=0;
    for(int i=0;binary>0;i++)
    {
        rem=binary%10;
        decimal=decimal+(rem*pow(2,i));
        binary=binary/10;
    }
    return decimal;
}

int main()
{   system("cls");
    int binary,decimal;
    cout<<"\nEnter binary no:";
    cin>>binary;
    decimal=BinToDec(binary);
    cout<<"\nDecimal no. is:"<<decimal;

    return 0;

}