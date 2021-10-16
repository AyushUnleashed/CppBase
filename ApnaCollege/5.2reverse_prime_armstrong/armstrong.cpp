// sum of cubes of digit = number then armstrong eg:153=1+125+27,371
#include<iostream> 
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{   system("cls");
    int num,soc=0;
    cout<<"Enter num:";
    cin>>num;
    int orignaln=num;

    while(num>0)
    {   int dig;
        dig=num%10;
        cout<<dig<<"\t";
        soc = soc + pow(dig,3);
        num=num/10;
        cout<<soc<<endl;
    }

    cout<<"\n"<<soc;

    if(soc == orignaln)
    {
        cout<<"\nArmstrong no. it is";
    }
    else{
        cout<<"\nNot Armstrong no.";
    }

    return 0;

}