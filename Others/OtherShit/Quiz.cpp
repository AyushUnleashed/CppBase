#include<iostream>
#include<conio.h>
using namespace std;

void pointMech(string,string,int &);
int main()
{
    system("cls");
    string ans;int points=0;

    cout<<"\nYou-Know-Who?\n>>";
    cin>>ans;
    pointMech(ans,"Voldermot",points);

    cout<<"\nChristopher ?\n>>";
    cin>>ans;
    pointMech(ans,"Nolan",points);

    cout<<"\nI Love You \n>>";
    cin>>ans;
    pointMech(ans,"3000",points);

    cout<<"\nLife is a\n>>";
    cin>>ans;
    pointMech(ans,"Joke",points);

    cout<<"\nLife _____ Everyone.\n>>";
    cin>>ans;
    pointMech(ans,"Fucks",points);


    cout<<"\n=========================================";
    cout<<"\nCurrent Points are:"<<points;

    return 0;
}

void pointMech(string ans,string correctans,int &points)
{
    
    if(ans==correctans)
    {
        cout<<"\nCorrect ans(+4)";
        points=points+4;
    }
    else
    {
        cout<<"\nWrong ans(-1)";
        points--;
    }
}