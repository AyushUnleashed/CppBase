#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
//difference between 2 time periods
int main()
{
    int hour1,hour2,min1,min2,diffHour,diffMin;
    system("cls");
    cout<<"Enter 1st Time period: ";
    cin>>hour1>>min1;
    cout<<"\nEnter 2nd Time period: ";
    cin>>hour2>>min2;

    // cout<<"\nT1:"<<"h1:"<<hour1<<"m1:"<<min1<<endl;
    // cout<<"\nT2:"<<"h2:"<<hour2<<"m2:"<<min2<<endl;

    if(hour1<24 && hour2<24 && min1<60 && min2<60)
    {   
        diffMin=min1-min2;
        diffHour=hour1-hour2;

        if(diffHour<0 && diffMin>0)
        {   diffMin=60-diffMin;
            diffHour=abs(diffHour);
            diffHour--;
        }
        else    if(diffHour<0 && diffMin<0)
        {   diffMin=abs(diffMin);
            diffHour=abs(diffHour);
        }
        else if(diffHour>0 && diffMin<0)
        {   diffMin=abs(diffMin);
            diffMin=60-diffMin;
            diffHour--;
        }
        cout<<"Difference between both TimeZones is:";
        cout<<diffHour<<"\t"<<diffMin;
    }
    else
    {
        cout<<"\nError";
    }
    return 0;

}