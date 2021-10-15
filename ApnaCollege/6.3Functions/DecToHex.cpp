#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;

//Program to Covert Decimal no. to hexadecimal no.

void DecToHex(int decimal)
{   int rem=0,i=0; //rem->remainder
    char hexadecimal[10];

    //loop to store remainder in array;
    for(i=0;decimal>0;i++)
    {   
        rem=decimal%16;

        if(rem>=0 && rem<=9)
        {   
            hexadecimal[i]=(48+rem);  // to convert integer 0 to charcter 0
        }
        else if (rem>=10 && rem<=15)
        {   rem=rem+55;

            hexadecimal[i]=(char)rem;
        }
        decimal=decimal/16;
    }

    cout<<"HexaDecimal Number is:";

    //Printing array in reverse to get right ans

    for(int loopi=i-1;loopi>=0;loopi--)
    { 
        cout<<hexadecimal[loopi];
    }

}

int main()
{    
    system("cls");
    long int decimal;
    cout<<"\nEnter decimal no:";
    cin>>decimal;
    DecToHex(decimal);
    return 0;
}