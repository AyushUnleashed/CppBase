#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    cout<<"In 32 bit system\n";
    int n;
    cin>>n;
    int noOfTrailingZeros = 0;
    bool oneOccured=false;
    while((n>0) && (oneOccured==false))
    {
        if((1&n) != 0)
        {
            oneOccured=true;
        }
        n = n>>1;
        noOfTrailingZeros++;
        
    }
    noOfTrailingZeros-=1;
    //because counted till
    // one of eg: 1000

    cout<<"\nnoOfTrailingZeros:"<<noOfTrailingZeros;
    return 0;
}