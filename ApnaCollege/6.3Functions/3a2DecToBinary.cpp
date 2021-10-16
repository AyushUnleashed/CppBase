#include<iostream>
#include<conio.h>
#include<math.h> 
using namespace std;
//Program to Covert Decimal no. to Binary no.



void DecToBin(int decimal)
{   int rem=0,binaryno[50],i=0; //rem->remainder

    //loop to store remainder in array;
    for(i=0;decimal>0;i++)
    {   
        rem=decimal%2;
        binaryno[i]=rem;
        decimal=decimal/2;
    }
    
    int loopi=i-1;

    cout<<"Binary Number is:";
    //Printing array in reverse to get right ans;

    for(int j=loopi;loopi>=0;loopi--)
    {
        cout<<binaryno[loopi];
    }

}  

int main()
{   system("cls");
    long int decimal;
    cout<<"\nEnter decimal no:";
    cin>>decimal;
    DecToBin(decimal);
    return 0;
}