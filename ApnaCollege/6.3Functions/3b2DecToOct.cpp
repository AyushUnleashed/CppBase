#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//Program to Covert Decimal no. to Binary no.

void DecToOct(int decimal)
{   int rem=0,octalno[50],i=0; //rem->remainder

    //loop to store remainder in array;
    for(i=0;decimal>0;i++)
    {   
        rem=decimal%8;
        octalno[i]=rem;
        decimal=decimal/8;
    }
    
    int loopi=i-1;

    cout<<"octal Number is:";
    //Printing array in reverse to get right ans;

    for(int j=loopi;loopi>=0;loopi--)
    {
        cout<<octalno[loopi];
    }

}  

int main()
{   system("cls");
    long int decimal;
    cout<<"\nEnter decimal no:";
    cin>>decimal;
    DecToOct(decimal);
    return 0;
}