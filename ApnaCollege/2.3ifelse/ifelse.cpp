#include<iostream>
using namespace std;

int main()
{
    int savings;
    cout<<"Enter Savings";
    cin>>savings;

    if(savings>5000)
    {
        cout<<"Neha\n";
        if(savings>10000)
            cout<<"RoadTrip";
        else
        cout<<"Shopping";
                

    }
    else if(savings>=2000)
    {
         cout<<"Rashmi";
    }
     else
     {
         cout<<"\nFriends";
     }
     

    return 0;
}