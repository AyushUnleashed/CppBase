#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    cout<<"In 32 bit system\n";
    int n;
    cin>>n;
    int noOfLeadingZeros = 0;
    int i=32;
    while(i>0)
    {   
        if(n>0)
        {
            //Do nothing
        }
        else
        {
            noOfLeadingZeros++;
        }
        n=n>>1;
        i--;
    }

    cout<<"\nnoOfLeadingZeros:"<<noOfLeadingZeros;
    return 0;
}