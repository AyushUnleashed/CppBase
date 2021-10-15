#include<iostream>
using namespace std;

int main()
{   char choice;
    cout<<"Enter cHoice:\n";
    cin>>choice;

    switch (choice)
    {
        case 'a':
            cout<<"Hola";
            break;
        case 'b':
            cout<<"Namaste";
            break;
        case 'c':
            cout<<"Hello";
            break;
        case 'd':
            cout<<"ciao";
            break;
        case 'e':
            cout<<"Namaskaram";
            break;
        default:
            cout<<"I am still learning";
            break;

    }
    
}