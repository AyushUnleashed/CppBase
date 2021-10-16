#include<iostream>
#include<conio.h>
using namespace std;

// DD/MM/YY
int main()
{
    system("cls");
    int DD,MM,YYYY;
    cout<<"Enter Date in DD MM YYYY:";
    cin>>DD>>MM>>YYYY;
    int dateMAX;
   
    if(MM==02)
    {
        if(YYYY%4==0)
        {
            dateMAX=29;
        }
        else 
        dateMAX=28;
    }
    else if(MM == 04 || MM== 06 || MM== 9 || MM== 11)
    {
        dateMAX=30;
    }
    else
    {
        dateMAX=31;
    }

    if( ( DD>=01 && DD<=dateMAX) &&( MM>=01 && MM<=12 ) && (YYYY>0))
    {
       cout<<"\nDate is valid:"<<DD<<"/"<<MM<<"/"<<YYYY; 
    }
    else{cout<<"\nDate is invalid";}

    return 0;

}